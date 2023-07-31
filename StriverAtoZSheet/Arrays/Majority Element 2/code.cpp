class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int n = nums.size()/3;
        for(auto x:m){
            if(x.second>n){
                v.push_back(x.first);
            }
        }
        return v;
    }
};