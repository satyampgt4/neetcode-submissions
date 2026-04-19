class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0) return {0};
        vector<int>v(n+1);
        v[0] =0;
        int p = 0;
        for(int i =1; i<=n; i++){
            if((i&(i-1)) == 0){
                p = 0;
            } 
            v[i] = 1 + v[p];
            p++;
        }
        return v;
    }
};
