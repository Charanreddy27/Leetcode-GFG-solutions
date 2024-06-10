class Solution {
public:
    int find(vector<int>&nums,int low,int high,int target){
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                high = mid-1;
            }
            else if(nums[mid]>target){
                high =mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;
        int less = find(nums,low,high,target);
        int grt=find(nums,low,high,target+1)-1;
        if(less<nums.size() && nums[less]==target &&nums[grt]== target){
            return {less,grt};
        }
        return {-1,-1};
        
    }
};