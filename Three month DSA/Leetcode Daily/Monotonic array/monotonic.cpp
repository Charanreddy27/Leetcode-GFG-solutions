class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(n==0 or n==1) return true;
        bool inc = true;
        bool dec = true;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                dec = false;
            }
            else if(nums[i]>nums[i-1]){
                inc = false;
            }
        }
        if(!inc and !dec){
            return false;
        }
        return true;
    }
};