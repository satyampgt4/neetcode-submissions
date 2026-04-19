class Solution {
public:

    static bool comp(vector<int> a, vector<int> b){
        if(a[0]==b[0])
            return a[1] < b[1];
        return a[0] < b[0];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), comp);

        stack<vector<int>>st;
        for(auto x : intervals  ){
            cout<<x[0]<<":"<<x[1]<<"; ";
            if(st.size()==0){
                 st.push(x);
            } else {
                vector<int> v = st.top();
                if(v[1] <= x[0]){
                    st.push(x);
                } else if (v[1] > x[1]) {
                    st.pop();
                    st.push(x);
                }
            }
        }
        return intervals.size() - st.size();
    }
};
