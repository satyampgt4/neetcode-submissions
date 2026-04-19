class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>m;
        int ans =0;
        for(int i=0, j=0; j<s.size(); j++){
            if(++m[s[j]]>1){
                while(m[s[j]]>1){
                    m[s[i]]--;
                    i++;
                }
                
            }
            ans= max(ans,j-i+1);
        }
        return ans;
    }
};
