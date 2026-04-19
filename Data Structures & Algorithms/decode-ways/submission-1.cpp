class Solution {
public:
    vector<int>v;

    int fun(string s, int i){
        if(i>=s.size()) return 1;
        if(v[i]!=-1) return v[i];
        v[i]=0;
        int two =0;
        int one = 0;
        if(i<s.size()-1 && valid(s,i)){
            two = fun(s,i+2);
        }
        if(s[i]!='0'){
            one  = fun(s,i+1);
        }
        // cout<<i<<"|"<<one<<"|"<<two<<"; ";
        return v[i] = one+two;

        
    }

    bool valid(string s , int i){
        if(s[i]=='1') return true;
        if(s[i]=='2' && s[i+1]<='6') return true;
        return false;

    }
    int numDecodings(string s) {
        v.assign(s.size(),-1);
        return fun(s,0);
    }
};
