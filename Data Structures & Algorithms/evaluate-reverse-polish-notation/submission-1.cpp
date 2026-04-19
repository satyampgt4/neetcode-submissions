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
        
        stack<int>st;
        for(int i =0; i<tokens.size(); i++){
            if(tokens[i].size()==1 && (tokens[i]=="+" ||tokens[i]=="-" || tokens[i]=="*" ||tokens[i]=="/") )
            {
                int s2 = st.top();
                st.pop();
                int s1 = st.top();
                st.pop();
                int ans = eval((s1), (s2), tokens[i]);
                st.push((ans));
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return (st.top());
    }
};
