class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int>v;
    priority_queue<int>curr,removed;
     for(int i =0; i<k-1; i++){
        curr.push(nums[i]);
     }    
     for(int i=0,j= k-1; j<nums.size(); i++,j++){
        curr.push(nums[j]);
        v.push_back(curr.top());
        removed.push(nums[i]);
        while(removed.size()!=0 && curr.top()==removed.top()){
            curr.pop();
            removed.pop();
        }
     }
     return v;
    }
};
