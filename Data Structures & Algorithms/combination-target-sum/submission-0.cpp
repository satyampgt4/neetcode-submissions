class Solution {
public:

    void find( int i ,int t, vector<int>v,vector<int>& nums, vector<vector<int>>& ans){
        if(t<0 || i<0)
        return;

    find(i-1,t,v,nums,ans);

    v.push_back(nums[i]);
    if(t-nums[i]==0){
        ans.push_back(v);
        return;
    }
    find(i,t-nums[i],v,nums,ans);

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<int>v;
        vector<vector<int>>ans;
        find(nums.size()-1,target, v, nums, ans);
        return ans;
    }
};
