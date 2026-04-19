class Solution {
public:
    vector<vector<int>>v;
    int fun(string& t, string& s, int i, int j){
        if(i<0) return 0;
        if(j<0) return 0;
        if(v[i][j]!=-1) return v[i][j];
        int a(0),b(0),c(0);
        if(t[i] == s[j]){
            a = fun(t,s,i-1,j-1)+1;
        }
        b = fun(t,s,i-1,j);
        c = fun(t,s,i,j-1);

        return v[i][j] = max({a,b,c});
    }
    int longestCommonSubsequence(string text1, string text2) {
        v.assign(text1.size()+1,vector<int>(text2.size()+1,-1));

       return fun(text1,text2, text1.size()-1,text2.size()-1);
    }
};
