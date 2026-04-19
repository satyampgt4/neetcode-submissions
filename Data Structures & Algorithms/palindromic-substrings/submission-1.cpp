class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<int>>v(s.size(),vector<int>(s.size(),0));
        vector<vector<int>>c(s.size(),vector<int>(s.size(),0));

        for(int i =0; i<s.size();i++){
            for(int j =0; j<s.size()-i; j++){
                int a(j),b(j+i);
                if(a==b){
                    v[a][b]=1;
                    c[a][b]=1;
                }
                else if(s[a]==s[b] && (v[a+1][b-1]==1 || b-a==1))
                {
                    v[a][b] = 1;
                     c[a][b] = 1 + c[a][b-1] + c[a+1][b] - c[a+1][b-1];
                }
                else{
                    c[a][b] = c[a][b] + c[a][b-1] + c[a+1][b] - c[a+1][b-1];
                 }
            }
        }
        return c[0][s.size()-1];

    }
};
