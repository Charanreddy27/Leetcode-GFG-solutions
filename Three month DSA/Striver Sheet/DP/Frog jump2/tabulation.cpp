
int minimizeCost(int n, int k, vector<int> &height){
    // Write your code here.
    vector<int> dp(n,0);
    dp[0]=0; 
    for(int i=1;i<n;i++){
        int mini = INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jumps = dp[i-j]+abs(height[i]-height[i-j]);
                mini = min(mini,jumps);
            }
        }
        dp[i]=mini;
    }
    return dp[n-1];
}