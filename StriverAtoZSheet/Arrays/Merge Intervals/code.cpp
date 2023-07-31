class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        for(int i=0;i<intervals.size();i++){
            if(v.empty() || intervals[i][0]>v.back()[1]){
                v.push_back(intervals[i]);
            }
            else v.back()[1] = max(v.back()[1],intervals[i][1]);
        }
        return v;
    }
};