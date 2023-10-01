int rec(int n,int last,vector<vector<int>> &points,vector<vector<int>> &dp){
    if(n==0){
        int maxi=0;                     
        for(int i=0; i<3;i++){
            if(i!=last){
                maxi= max(maxi,points[0][i]);
            }
        }
        return maxi;
    }
    if(dp[n][last]!=-1) return dp[n][last];
    int maxi=0;
    for(int i=0;i<3;i++){
        if (i != last) {
            int point = points[n][i] + rec(n - 1, i, points,dp);

            maxi = max(maxi, point);
        }
    }
    return dp[n][last]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(4,-1));
    return rec(n-1,3,points,dp);