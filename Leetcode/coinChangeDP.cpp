class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        sort(coins.begin(),coins.end());
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i] =amount+1;
            for(int j=0;j<n && coins[j] <=i ;j++){
                int x = 1+dp[i-coins[j]];
                dp[i] = min(dp[i],x);
            }

        }
        if(dp[amount]==amount+1)return -1;
        return dp[amount];
    }
};