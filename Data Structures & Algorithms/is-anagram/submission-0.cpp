class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;

        unordered_map<char,int>pam;
        for(int i =0; i<n; i++)
        pam[s[i]]++;
        for(int j =0; j<m; j++)
        pam[t[j]]--;

        for(auto e:pam){
            if(e.second!=0)
            return false;
        }
        return true;
    }
};
