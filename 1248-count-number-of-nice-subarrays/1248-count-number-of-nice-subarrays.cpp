class Solution {
public:
    int helper(vector<int>& nums, int goal){
        int l=0;
        int r =0;
        int n = nums.size();
        int count =0;
        int sum=0;
        if(goal<0) return 0;
        while(r<n){
            sum+=(nums[r] % 2);
            while(sum>goal){
                sum-=(nums[l] %2);
                l++;
            }
            count+= (r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums,k)- helper(nums,k-1);
        
    }
};