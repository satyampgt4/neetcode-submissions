class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<int,int>m;
        for(int i =0; i<t.size(); i++)
            m[t[i]]++;

        int c = m.size();
        int co =INT_MAX;
        string ans= "";
        for(int i=0, j=0; j<s.size(); j++){
             if(m.count(s[j])!=0 && --m[s[j]]==0)
                c--;
            while(c==0 ){
                if(co>(j-i+1)){
                co = j-i+1;
                ans =s.substr(i,j-i+1);
            }
               
                if(m.count(s[i])!=0 && ++m[s[i]]==1 )
                    c++;
                i++;

            }
           
            
            cout<<i<<"+"<<j<<"="<<c<<" "<<co<<" "<<ans <<";";
            
            

        }
        return ans;
    }
};
