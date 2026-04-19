class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> indegree(n, 0);
        vector<vector<int>> adj(n);
        
        for (auto &p : pre) {
            adj[p[1]].push_back(p[0]);
            indegree[p[0]]++;
        }

        queue<int> q;
        for (int i = 0; i < n; ++i)
            if (indegree[i] == 0)
                q.push(i);

        int count = 0;
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            count++;
            for (auto next : adj[course]) {
                indegree[next]--;
                if (indegree[next] == 0)
                    q.push(next);
            }
        }

        return count == n;
    }
};
