class Solution {
public:

     static bool comp(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0])
        return a[1] < b[1]; // If start equal, sort by end
    return a[0] < b[0]; // Otherwise, sort by start
}

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),comp);

        vector<vector<int>> ans;
        int j =0;
        ans.push_back(intervals[0]);
        cout<<intervals[0][0]<<" ";
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<=ans[j][1]){
                ans[j][1] = max(ans[j][1], intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans;
    }
};
