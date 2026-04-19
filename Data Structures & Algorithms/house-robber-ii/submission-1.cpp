class Solution {
public:
vector<vector<int>>v;
    int fun(vector<int>& nums,int i , int first ){
        if(i>=nums.size()) return 0;
        if(first == 1 && i == nums.size()-1) return 0;
        if(v[first][i] !=-1) return  v[first][i];

        if(i==0){
            v[first][i] =  max(fun(nums,i+1,0),nums[i]+ fun(nums,i+2,1));
        } else{ 
            v[first][i] =  max(fun(nums,i+1,first),nums[i]+ fun(nums,i+2,first));
        }
        return v[first][i];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        v.assign(2,vector<int>(nums.size(),-1));

        return max(fun(nums,0,1),fun(nums,1,0));
    }
};
