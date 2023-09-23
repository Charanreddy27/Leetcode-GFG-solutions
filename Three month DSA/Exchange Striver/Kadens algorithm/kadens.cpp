class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=nums[0];
        // int count =1;
        for(int i=1;i<nums.size();i++){
            if(sum<0){
                sum=0;
            }
            sum+=nums[i];
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};