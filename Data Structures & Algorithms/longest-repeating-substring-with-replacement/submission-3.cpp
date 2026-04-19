class Solution {
public:
    int characterReplacement(string s, int k) {
       unordered_map<int,int>m;
       int ans =0;
       int count = 0;
       for(int i =0, j=0; j<s.size(); j++){

        count = max(count,++m[s[j]]);
        
        while(j-i+1-count>k){
            --m[s[i++]];
        }
        ans = max(ans,j-i+1);
       }
        
       return ans;
    }
};
