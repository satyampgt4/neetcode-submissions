class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()>n-1) return false;
        vector<int>v(n,false);
        vector<vector<int>>adj(n,vector<int>());
        for(auto e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        queue<pair<int,int>>q;
        v[0] = true;
        for(auto a: adj[0]){
            q.push({a,0});
        }
        while(q.size()){
            int t = q.front().first;
            int p = q.front().second;
            q.pop();
            v[t] = true;

            for(auto a: adj[t]){
                if(a!=p){
                   if(v[a])
                   return false;

                   q.push({a,t});
                }
            }
        }
        bool allConnected = true;
        for(bool x: v){
            allConnected = allConnected && x;
        }
        return allConnected;
    }
};
