class Solution {
public:
    vector<int>v;

    int fun (vector<int>& nums, int i){
        if(i>=nums.size()) return 0;
        if(v[i]!=-1) return v[i];
        return v[i] = max(nums[i]+fun(nums,i+2), fun(nums,i+1) );

    }
    int rob(vector<int>& nums) {
        v.assign(nums.size(),-1);
        return fun(nums,0);
    }
};
