class Solution {
public:
        int MOD = pow(10,9)+7;
        int dp[51][101][51];
        int numOfArrays(int n, int m, int k) {
        if (k < 1 || k > m || k > n) return 0;
        if (n == 1) return m;
        if (dp[n][m][k]) return dp[n][m][k];
        int ret = 0;
        for (int i = 1; i <= m; ++i) {
            ret += numOfArrays(n-1, m, k) - numOfArrays(n-1, i-1, k);
            if (ret >= MOD) ret -= MOD;
            else if (ret < 0) ret += MOD;
            ret += numOfArrays(n-1, i-1, k-1);
            if (ret >= MOD) ret -= MOD;
        }
        dp[n][m][k] = ret;
        return ret;
    }
    
};  