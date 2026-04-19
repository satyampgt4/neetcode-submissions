class Solution {
public:
    vector<int>v;

    int fun(int n){
        if(v[n] != -1) return v[n];
        if(n==0) return 1;
        if(n==-1) return 0;

        return v[n] = fun(n-1)+fun(n-2);
    }
    int climbStairs(int n) {

        v.assign(n+1,-1);

        return fun(n);
        
    }
};
