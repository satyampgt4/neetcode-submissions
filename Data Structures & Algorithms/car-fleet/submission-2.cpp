class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& speed) {
        
        vector<pair<int,int>>v;
        for(int i =0; i<p.size(); i++){
            v.push_back({p[i],speed[i]});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        stack<float>st;
        for(int i =0; i<p.size(); i++){
            float time = (float(target-v[i].first)/v[i].second);
            cout<<time<<" ";
           if(st.size() && st.top()>=time){
                continue;
           }else{
            st.push(time);
           }
        }
        return st.size();
    }
};
