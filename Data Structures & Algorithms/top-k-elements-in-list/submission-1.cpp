class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i : nums)
        m[i]++;

        vector<vector<int>>v(nums.size()+1);

        for(auto p:m)
        v[p.second].push_back(p.first);

        vector<int>ans;
        for(int i =nums.size(); i>0; i--){
            for(int x : v[i]){
                ans.push_back(x);
                if(ans.size()==k)
                return ans;
            }
        }
        return ans;
    }
};
