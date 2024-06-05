class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        int pIndex = 0, nIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0 && pIndex < p.size()) {
            nums[i] = p[pIndex++];
        } else if (nIndex < n.size()) {
            nums[i] = n[nIndex++];
        }
    }
    return nums;
    }
};