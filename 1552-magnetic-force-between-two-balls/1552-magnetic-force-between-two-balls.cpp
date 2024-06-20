class Solution {
public:
    int n;

    // Helper function to check if we can place k balls with at least `mid` distance apart
    bool chk(vector<int>& po, int mid, int k) {
        k--; // We already place the first ball
        int prev = po[0]; // Place the first ball at the first position
        for (int t = 1; t < n; t++) {
            if (po[t] - prev >= mid) { // Check if we can place next ball at least `mid` distance away
                k--; // Place the ball
                if (k <= 0)
                    return true; // If all balls are placed, return true
                prev = po[t]; // Update the position of the last placed ball
            }
        }
        return false; // Not all balls could be placed with at least `mid` distance
    }

    int maxDistance(vector<int>& po, int k) {
        n = po.size();
        sort(po.begin(), po.end()); // Sort the positions
        int r = po[n - 1] - po[0]; // Maximum possible distance
        int l = 1; // Minimum possible distance

        // Binary search for the maximum possible minimum distance
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (chk(po, mid, k))
                l = mid + 1; // Try for a larger distance
            else
                r = mid - 1; // Try for a smaller distance
        }
        return r; // Maximum possible minimum distance
    }
};