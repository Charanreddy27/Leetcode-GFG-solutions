class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
            else{
                p.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i=0;i<p.size();i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};