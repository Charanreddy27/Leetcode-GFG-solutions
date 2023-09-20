class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int tsum =0;
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
        }
        int rsum = tsum - x;
        if(rsum<0) return -1;
        if(rsum ==0) return nums.size();
        
        int l=0;
        int r=0;
        int sum=0;
        int res=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>rsum){
                sum-=nums[l];
                l++;
            }
            if(sum==rsum) res = max(res,r-l+1);
            r++;
        }
        if(res==0){
            return -1;
        }
        else{
            return nums.size()-res;
        }
    }
};