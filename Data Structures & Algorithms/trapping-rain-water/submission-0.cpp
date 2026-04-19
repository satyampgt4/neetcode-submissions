class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>l(n),r(n);
        l[0] = 0;
        r[n-1] = 0;
        for(int i =1; i<n; i++){
                l[i] = max(h[i-1],l[i-1]);
                r[n-1-i] = max(h[n-1-i+1],r[n-1-i+1]);
            
        }
        int ans= 0;
        for(int i=0; i<n; i++){
            int m = min(l[i],r[i]);
            ans += max(0,m-h[i]);
        }
        return ans;
    }
};
