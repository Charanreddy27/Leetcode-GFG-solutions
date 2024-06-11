class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low =0;
        int m = matrix[0].size();
        int n = matrix.size();
        int high = m*n -1;
        while(low<=high){
            int mid = (low+high)/2;
            int i=mid/m;
            int j = mid%m;
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]< target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};