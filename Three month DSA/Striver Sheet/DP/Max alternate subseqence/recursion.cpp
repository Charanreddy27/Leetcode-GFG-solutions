class Solution {
public:
    int rec(int idx,vector<int> &nums){
        if(idx ==0) return nums[idx];
        if(idx<0) return 0;
        int pick = nums[idx]+rec(idx-2,nums);
        int notPick = rec(idx-1,nums);
        return max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return rec(n-1,nums);
    }
};