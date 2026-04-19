class Solution {
public:
    string longestPalindrome(string s) {

        vector<vector<int>>v(s.size(),vector<int>(s.size(),-1));
        int x =0;
        int y =0;

        for(int i =0; i<s.size(); i++){
            for(int j =i+1; j<s.size(); j++){

                if(v[i][j]==-1){
                v[i][j]= 0;
                int a(i),b(j);
                bool ans = true;
                while(a<b){
                    if(s[a]!=s[b])
                    {
                        ans = false;
                        break;
                    }
                    a++,b--;
                }
                if(ans) v[i][j]= 1;
                }
                // cout<<x<<"|"<<y<<";";
                if(v[i][j]==1 && y-x<j-i){
                    x= i;
                    y= j;
                }

            }
        }
        return s.substr(x,y-x+1);
    }
};
