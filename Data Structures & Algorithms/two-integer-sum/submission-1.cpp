class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        int n = nums.size();
        map<int,int>m;
        for(int i =0; i<n; i++){
            if(m.count(t-nums[i])!=0)
            return {m[t-nums[i]],i};
            m[nums[i]] =i;
        }
        return {-1,-1};
    }
};
