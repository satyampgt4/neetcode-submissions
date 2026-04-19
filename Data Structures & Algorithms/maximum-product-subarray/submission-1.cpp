class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int minp = nums[0];
        int maxp = nums[0];
        for(int i =1; i<nums.size(); i++){
            int temp = max({nums[i], nums[i]*minp, nums[i]*maxp });
            minp = min({nums[i], nums[i]*minp, nums[i]*maxp });
            maxp = temp;
            ans= max(maxp,ans);
        }
        return ans;

    }
};
