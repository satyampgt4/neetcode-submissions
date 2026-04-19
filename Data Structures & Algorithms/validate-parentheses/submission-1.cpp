class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c: s){
            cout<<c<<" ";
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            } else{
                if(c == ')'){
                    if(st.size()>0 && st.top()=='('){
                        st.pop();
                    } else{
                        return false;
                    }
                } else if(c == ']'){
                    if(st.size()>0 && st.top()=='['){
                        st.pop();
                    } else{
                        return false;
                    }
                } else if(c == '}'){
                    if(st.size()>0 && st.top()=='{'){
                        st.pop();
                    } else{
                        return false;
                    }
                }
            }
        }
        return st.size() ==0;
    }
};
