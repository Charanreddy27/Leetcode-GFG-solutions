class Solution {
public:
    vector<int> rows(int row){
        long long ans =1;
        vector<int> in;
        in.push_back(1);
        for(int col=1;col<row;col++){
            ans = ans*(row-col);
            ans = ans /col;
            in.push_back(ans);
        }
        return in;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row =1;row<=numRows;row++){
            ans.push_back(rows(row));
        }
        return ans;
    }
};