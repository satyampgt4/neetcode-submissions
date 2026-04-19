class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans ;
        ans.push_back(newInterval);
        int j =0;
        for(int i =0; i<intervals.size(); i++){
            if(intervals[i][1]<ans[j][0]){
               vector<int> t = ans[j];
               ans[j] = intervals[i];
               ans.push_back(t);
               j++;

            } else if(intervals[i][0]>ans[j][1]) {
                ans.push_back(intervals[i]);
                j++;
            } else{
                ans[j][0] = min({ans[j][0], intervals[i][0]});
                ans[j][1] = max({ans[j][1], intervals[i][1]});
            }
        }
        return ans;
    }
};
