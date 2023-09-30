class Solution {
public:
    int rec(int idx,vector<int> &nums,vector<int> &dp){
        if(idx ==0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = nums[idx]+rec(idx-2,nums,dp);
        int notPick = rec(idx-1,nums,dp);
        return dp[idx]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return rec(n-1,nums,dp);
    }
};