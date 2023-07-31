class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int maxSum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(sum<0){
                sum=0;
            }
            sum=sum+nums[i];
            maxSum = max(sum,maxSum);
        }
        return maxSum;
        
    }
};