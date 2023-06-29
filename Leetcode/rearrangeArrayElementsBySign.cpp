class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        vector<int> res;
        int n = max(positive.size(),negative.size());
        for(int i=0;i<n;i++){
            if(i<positive.size()){
                res.push_back(positive[i]);
            }
            if(i<negative.size()){
                res.push_back(negative[i]);
            }
        }
        return res;
    }
};