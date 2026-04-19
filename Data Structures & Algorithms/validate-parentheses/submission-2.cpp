class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {
            {')', '('}, 
            {']', '['}, 
            {'}', '{'}
        };

        for (char c : s) {
            if (mp.count(c)) { // if c is a closing bracket
                if (st.empty() || st.top() != mp[c]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(c); // opening bracket
            }
        }
        return st.empty();
    }
};
