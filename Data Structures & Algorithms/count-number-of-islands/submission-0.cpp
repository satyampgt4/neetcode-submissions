class Solution {
public:
    void bfs(vector<vector<bool>>& v, vector<vector<char>>& g, int i, int j){
        
        int n = g.size();
        int m = g[0].size();

        queue<pair<int,int>>q;
        q.push({i,j});

        while(q.size()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            if(a<0 || b<0 || a==n || b==m || v[a][b] || g[a][b]=='0')
                continue;
           
            v[a][b] = true;
            q.push({a+1,b});
            q.push({a-1,b});
            q.push({a,b-1});
            q.push({a,b+1});
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> v(n,vector<bool>(m,false));
        int ans =0;
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(!v[i][j] && grid[i][j]=='1')
                {
                    ans++;
                    bfs(v,grid,i,j);
                }
                v[i][j] = true;
            }
        }
        return ans;

    }
};
