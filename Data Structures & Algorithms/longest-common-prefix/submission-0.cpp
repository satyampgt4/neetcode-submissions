class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int maxp = INT_MAX;
        string ans="";
        for(int i =0; i<strs.size(); i++){
            maxp = min(maxp,(int)strs[i].size());
        }
        for(int i=0; i<maxp; i++)
        {
            char k = strs[0][i];
            bool f= false;
            for(int j =0; j<strs.size();j++){
                if(strs[j][i]!=k)
                {
                    f= true;
                    break;
                }
            }
            if(f) break;
            ans +=k ;
        }
        return ans;
    }
};