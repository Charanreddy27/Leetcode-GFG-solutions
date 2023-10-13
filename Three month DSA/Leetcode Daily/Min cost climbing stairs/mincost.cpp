class Solution {
public:
    int rec(vector<int> &cost,vector<int> &dp,int id){
        if(id<0) return 0;
        if(id==1 or id==0) return cost[id];
        if(dp[id]!=-1) return dp[id];
        return dp[id]=cost[id]+min(rec(cost,dp,id-1),rec(cost,dp,id-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(rec(cost,dp,n-1),rec(cost,dp,n-2));
    }
};