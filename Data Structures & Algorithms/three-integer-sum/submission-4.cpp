class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i =0; i<n; i++){

            int j = i+1, k=n-1;
            while(j<k){
                // cout<<nums[i]<<"+"<<nums[j]<<"+"<<nums[k]<<" ";
                if(nums[i]+nums[j]+nums[k]==0){
                    v.insert({nums[i],nums[j],nums[k]});
                }
                if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }else{
                    j++;
                }

            }
        }
        for(auto x: v)
        ans.push_back(x);

        return ans ;
    }
};
