class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mj =1;
        for(int i =0; i<nums.size(); i++){
            if(mj<1) return false;
            mj = max(mj-1,nums[i]);
        }
        return true;
    }
};
