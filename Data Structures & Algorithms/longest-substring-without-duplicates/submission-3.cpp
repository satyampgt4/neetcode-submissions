class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>m;
        int ans =0;
        for(int i=0, j=0; j<s.size(); j++){
            if(m.count(s[j])!=0){
                i = max(i, m[s[j]] + 1);
            }
            ans= max(ans,j-i+1);
            m[s[j]] =j;
        }
        return ans;
    }
};
