class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        map<int,int>m;
        int ans  =0;
        for(int i =0; i<n; i++){
            m[nums[i]] = m[nums[i]-1]+1;
            ans = max(ans,m[nums[i]]); 
        }
        return ans;

    }
};
