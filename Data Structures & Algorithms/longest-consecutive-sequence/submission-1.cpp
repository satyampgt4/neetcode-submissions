class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int>m;
        int ans  =0;
        for(int i =0; i<n; i++){
            if(!m[nums[i]]){
                m[nums[i]] = m[nums[i]-1]+m[nums[i]+1]+1;
                m[nums[i]-m[nums[i]-1]] = m[nums[i]];
                m[nums[i]+m[nums[i]+1]] = m[nums[i]];
                ans = max(ans,m[nums[i]]);
            }
        }
        return ans;

    }
};
