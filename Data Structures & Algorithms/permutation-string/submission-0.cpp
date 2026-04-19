class Solution {
public:
    bool checkInclusion(string s2, string s1) {
        if(s2.size()>s1.size()) return false;
        
        vector<int>v(256,0);
        int c =0;
        for(int i =0; i<s2.size(); i++){
            v[s2[i]]--;
            if(v[s2[i]]==-1) c++;
            
        }
        for(int i =0; i<s2.size()-1; i++){
            if(v[s1[i]]==-1) c--;
             v[s1[i]]++;
        }
        for(int i =0, j =s2.size()-1; j<s1.size();i++, j++ ){
            if(v[s1[j]]==-1) c--;
            v[s1[j]]++;
            if(c==0) return true;
            v[s1[i]]--;
            if(v[s1[i]]==-1) c++;
    
        }
        return false;
    }
};
