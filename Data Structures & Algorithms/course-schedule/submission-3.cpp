class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<int>incnt(n,0);
        vector<vector<int>>outcnt(n,vector<int>());

        for(int i=0; i<pre.size(); i++){
            // if(pre[i][0]!=pre[i][1])
            {
                incnt[pre[i][0]]++;
                // incnt[pre[i][0]].push_back(pre[i][1]);
                outcnt[pre[i][1]].push_back(pre[i][0]);
            }

        }
        int ans =0;
        queue<int>q;
        for(int i =0; i<n; i++)
            if(incnt[i]==0) q.push(i);
            
        while(q.size()){
           int t =  q.front();
            q.pop();
                ans++;

            for(int i =0; i<outcnt[t].size(); i++){
                incnt[outcnt[t][i]]--;
                if(incnt[outcnt[t][i]]==0){
                        q.push(outcnt[t][i]);
                }
            }
            

        }
            return ans == n;
        
    }
};
