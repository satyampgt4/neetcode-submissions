class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n(nums.size());
        int prd =1;
        vector<int>v(n);
        for(int i =0; i<n; i++)
        {
            v[i]=prd;
            prd *=nums[i];
        }
        prd =1;
        for(int i =n-1; i>=0; i--){
            v[i] *=prd;
            prd *=nums[i]; 
        }
        return v;
    }
};
