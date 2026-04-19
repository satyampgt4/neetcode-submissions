class Solution {
public:
    string longestPalindrome(string s) {

        vector<vector<int>>v(s.size(),vector<int>(s.size(),-1));
        int x =0;
        int y =0;

        for(int i =0; i<s.size(); i++){
            for(int j =0; j<s.size()-i; j++){
                int a(j),b(i+j);
                // cout<<a<<"|"<<b<<"=";
                if(a==b){
                    v[a][b] = 1;
                }
                else{
                    v[a][b] = s[a]==s[b] && (v[a+1][b-1]|| b-a==1)==1? 1:0;
                }
                // cout<<v[a][b]<<";";

                if(v[a][b]==1)
                {
                    x = a;
                    y = b;
                }
            }
        }
        return s.substr(x,y-x+1);
    }
};
