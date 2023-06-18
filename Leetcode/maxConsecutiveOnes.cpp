class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxi = max(maxi,count);
                count =0;
            }
        }
        maxi = max(count,maxi);
        return maxi;
    }
};