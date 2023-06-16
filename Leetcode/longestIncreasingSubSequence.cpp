class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        int dp[n];
        int m =0;
        for(int i=0;i<n;i++){
            int x =1;
            for(int j=0;j<i ;j++){
              if(nums[i]>nums[j])  x = max(x,1+dp[j]);
            }
            dp[i]=x;
            m =max(m,dp[i]);
        }
        return m;
    }
};