class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
   deque<int>d;
    vector<int>v;
     for(int i =0; i<k-1; i++){
       while(d.size() && d.back()<nums[i]) d.pop_back();
       d.push_back(nums[i]);
     }    
     for(int i=0,j= k-1; j<nums.size(); i++,j++){
       while(d.size() && d.back()<nums[j]) d.pop_back();
        d.push_back(nums[j]);

        cout<<d.front()<<":"<<d.back()<<" ";
        v.push_back(d.front());

        if(d.front()==nums[i]) d.pop_front();
       
        
     }
     return v;
    }
};
