class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        int n = nums.size();
        for(int i =1; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]+nums[j]==t)
                 return {j,i};
            }
        }
        return {-1,-1};
    }
};
