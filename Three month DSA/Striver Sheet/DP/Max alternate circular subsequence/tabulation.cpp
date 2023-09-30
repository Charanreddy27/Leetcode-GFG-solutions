class Solution {
public:
    int rec(vector<int> arr){
        int n = arr.size();
        vector<int> dp(n,0);
        dp[0] = arr[0];
        for(int i=1;i<n;i++){
            int pick = arr[i];
            if(i>1) pick+=dp[i-2];
            int notPick=0;
            if(i>=1) notPick+= dp[i-1];
            dp[i]= max(pick,notPick);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
        return max(rec(temp1),rec(temp2));
        
        
    }
};