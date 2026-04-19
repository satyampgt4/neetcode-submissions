class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>v(t.size(),0);
        for(int i=0; i<t.size(); i++){
            while(st.size() && t[st.top()]<t[i]){
                v[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }

        return v;

    }
};
