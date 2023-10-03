class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                ans+=m[nums[i]];
                m[nums[i]]++;
            }
            else{
                m[nums[i]]=1;
            }
        }
        return ans;
    }
};