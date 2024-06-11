class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0, high = mat.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int ma = 0;
            for (int i = 1; i < mat[0].size(); i++) {
                if (mat[mid][i] > mat[mid][ma]) {
                    ma = i;
                }
            }
            bool isPeak = true;
            if (mid > 0 && mat[mid][ma] < mat[mid - 1][ma]) {
                high = mid - 1;
                isPeak = false;
            }
            if (mid < mat.size() - 1 && mat[mid][ma] < mat[mid + 1][ma]) {
                low = mid + 1;
                isPeak = false;
            }
            if (isPeak) {
                return {mid, ma};
            }
        }
        return {-1, -1};
    }
};