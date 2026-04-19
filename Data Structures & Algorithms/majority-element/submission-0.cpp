class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>m;
        for(int i =0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int ansc = -1;
        int ans = -1;
        for(auto a : m){
            if(a.second>ansc){
                ans = a.first;
                ansc = a.second;
            }
        }
        return ans;
    }
};