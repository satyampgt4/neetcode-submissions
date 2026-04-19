class Solution {
public:
    vector<int>v;
    int fun(vector<int>& coins, int amount){
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;
        if(v[amount]!=-1) return v[amount];

        int mina = INT_MAX;
        for(int i =0; i<coins.size(); i++){
            mina = min(mina,fun(coins,amount-coins[i]));
        }
        
        return v[amount] =  mina ==INT_MAX? mina: mina+1;
    }
    int coinChange(vector<int>& coins, int amount) {
        v.assign(amount+1,-1);
        int ans = fun(coins,amount);
        return ans == INT_MAX ?-1:ans;

    }
};
