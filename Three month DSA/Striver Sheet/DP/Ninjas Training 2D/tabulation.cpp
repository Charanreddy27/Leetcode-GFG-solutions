int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(4,0));
    dp[0][0] = max(points[0][1],points[0][2]);
    dp[0][1] = max(points[0][0],points[0][2]);
    dp[0][2] = max(points[0][0],points[0][1]);
    dp[0][3] = max(points[0][1],max(points[0][2],points[0][0]));
    for(int i=1;i<n;i++){
        for(int last =0;last<4;last++){
            int maxi=0;
            dp[i][last] =0;
            for(int task=0;task<3;task++){
                if (task != last) {
                  int point = points[i][task] + dp[i - 1][task];
                  maxi = max(maxi, point);
                }
            }
            dp[i][last]=maxi;
        }
    }
    return dp[n-1][3];


    // return rec(n-1,3,points,dp);
}