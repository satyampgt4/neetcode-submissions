class Solution {
public:

    void fun(vector<bool>& v, vector<vector<int>>& adj, int i){
        if(v[i]) return;

        v[i] = true;
        for(int a: adj[i])
            fun(v,adj,a);
    }
    int countComponents(int n, vector<vector<int>>& edges) {

        vector<bool>v(n,false);
        vector<vector<int>>adj(n,vector<int>());
        for(auto x: edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int ans =0;
        for(int i =0; i<n; i++){
            if(!v[i]){
                ans++;
                fun(v,adj,i);
            }
        }
        return ans;

    }
};
