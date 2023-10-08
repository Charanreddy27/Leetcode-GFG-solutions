class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        if (n1<n2) // for less space, interchange nums1 & nums2
            return maxDotProduct(nums2, nums1);
        vector<vector<int>> dp(2, vector<int>(n2+1, INT_MIN));
        int res=INT_MIN;
        #pragma unroll
        for(int i=n1-1; i>=0; i--){
            for(int j=n2-1; j>=0; j--){
                int x=nums1[i]*nums2[j];
                dp[i&1][j]=max({
                    x,
                    x+max(0, dp[(i+1)&1][(j+1)]),
                    dp[i&1][(j+1)],
                    dp[(i+1)&1][j]
                });
                res=max(res, dp[i&1][j]);
            }
        }
        return res;
    }
};