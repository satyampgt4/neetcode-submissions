class Solution {
public:
    int eval(int a,int b, string s){
       if(s == "+"){
        return a+b;
       } else if(s == "-"){
        return a-b;
       } else if(s == "*"){
        return a*b;
       } else if(s == "/"){
        return a/b;
       }
        return 0;
    }
   
    int evalRPN(vector<string>& tokens) {
        
        stack<string>st;
        for(int i =0; i<tokens.size(); i++){
            if(tokens[i].size()==1 && (tokens[i]=="+" ||tokens[i]=="-" || tokens[i]=="*" ||tokens[i]=="/") )
            {
                string s2 = st.top();
                st.pop();
                string s1 = st.top();
                st.pop();
                int ans = eval(stoi(s1), stoi(s2), tokens[i]);
                st.push(to_string(ans));
            }
            else{
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};
