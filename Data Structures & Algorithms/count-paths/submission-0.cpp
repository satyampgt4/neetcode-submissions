class Solution {
public:
    vector<vector<int>>v;
    int fun(int m, int n) {
        if(m==0 && n==0) return 1;
        if(m<0) return 0;
        if(n<0) return 0;
        if(v[m][n]!=-1) return v[m][n];
        return v[m][n] = fun(m,n-1)+ fun(m-1,n);

    }
    int uniquePaths(int m, int n) {
        v.assign(m+1,vector<int>(n+1,-1));
        return fun(m-1,n-1);
    }
};
