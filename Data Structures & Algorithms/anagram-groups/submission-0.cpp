class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>m;

        for(int i =0; i<strs.size(); i++){
            vector<int>v(26,0);
            for(int j =0;j<strs[i].size(); j++){
                v[strs[i][j]-'a']++;
            }
            string s = "";
            for(int j =0; j<26; j++){
                s += (v[j]+'0');
            }
            m[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto a : m)
        {
            ans.push_back(a.second);
        }
        return ans;
    }
};
