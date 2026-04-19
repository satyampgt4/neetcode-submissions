class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        
        int n = m.size();
        for(int j =0 ; j<n; j++){
            int a(0),b(n-1);
            while(a<b){
                int x = m[a][j];
                m[a][j] =  m[b][j];
                m[b][j] = x;
                a++,b--;
            }
        }

        for(int j =0 ; j<n; j++){
            for(int i =0; i<j; i++){
                int x = m[i][j];
                m[i][j] =  m[j][i];
                m[j][i] = x;
            }
        }
    }
};
