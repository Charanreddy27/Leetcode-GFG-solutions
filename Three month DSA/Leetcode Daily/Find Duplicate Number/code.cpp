class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int dup=0;
        for(auto i:m){
            if(i.second>1){
                dup = i.first;
                break;
            }
        }
        return dup;
    }
};