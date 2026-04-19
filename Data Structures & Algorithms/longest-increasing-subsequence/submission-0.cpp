class Solution {
public:
    vector<vector<int>>v;
    int fun(vector<int>& nums, int i, int last){
        if(i==nums.size()) return 0;
        if(v[i][last]!=-1) return v[i][last];
        int without = 0;
        int with = 0;
        if(last ==0 ||nums[i]>nums[last-1])
            with = 1+ fun(nums,i+1, i+1);
         without = fun(nums,i+1, last);

         return v[i][last]= max(with,without);
    }
    int lengthOfLIS(vector<int>& nums) {
        v.assign(nums.size()+1,vector<int>(nums.size()+1,-1));
        return fun(nums,0, 0);
    }
};
