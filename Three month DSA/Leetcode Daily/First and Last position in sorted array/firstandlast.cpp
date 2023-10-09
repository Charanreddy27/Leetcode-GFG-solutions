class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-1;
        int b=-1;
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
                count++;
                break;
            }
        }
        if(v.empty()) v.push_back(-1);
        for(int i=count;i<nums.size();i++){
            if(nums[i]==target){
                b= i;
            }
        }
        v.push_back(b);
        if(v.size()==0){
            v.push_back(-1);
            v.push_back(-1);
        }
        if((v[0]!=-1 && v[1]==-1)){
            v[1]=v[0];
        }
        return v;
    }
};