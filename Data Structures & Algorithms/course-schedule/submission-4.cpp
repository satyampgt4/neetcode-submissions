class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<bool>v(n,false);
        vector<vector<int>>incnt(n,vector<int>());
        vector<vector<int>>outcnt(n,vector<int>());

        for(int i=0; i<pre.size(); i++){
            // if(pre[i][0]!=pre[i][1])
            {
                incnt[pre[i][0]].push_back(pre[i][1]);
                outcnt[pre[i][1]].push_back(pre[i][0]);
            }

        }
        queue<int>q;
        for(int i =0; i<n; i++){
            if(incnt[i].size()==0){
                q.push(i);
            }
        }
        while(q.size()){
           int t =  q.front();
           cout<<t<<"="<<v[t]<<"|";
            q.pop();
            if(v[t]) continue;

            bool r = true;
            for(int i =0 ; i<incnt[t].size(); i++){
                r = r && v[incnt[t][i]];
            }
            if(r){
                v[t] = true;
                for(int i =0 ; i<outcnt[t].size(); i++){
                    q.push(outcnt[t][i]);
                }
            }
            // cout<<v[t]<<"||;";

        }
            int ans = true;
            for(int i =0; i<n; i++){
                ans = ans && v[i];
            }
            return ans;
        
    }
};
