class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> p,n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                p.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }
        p.insert(p.end(),n.begin(),n.end());
        return p;
    }
};