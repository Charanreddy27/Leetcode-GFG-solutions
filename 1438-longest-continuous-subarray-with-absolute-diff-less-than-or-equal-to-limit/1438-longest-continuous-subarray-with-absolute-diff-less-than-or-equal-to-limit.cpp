class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0, j=0;
        int n = nums.size();
        map<int, int> st;
        int ans = 0;
        while(j<n) {
            if(!st.empty()) {
                int start = st.begin()->first;
                int end = (--st.end())->first;
                if(abs(end - start) <= limit) {
                    ans = max(ans, j-i);
                    int value = nums[j];
                    st[value]++;
                    j++;
                } else {
                    int value = nums[i];
                    st[value]--;
                    if(st[value] == 0){
                        st.erase(value);
                    }
                    i++;
                }
            } else {
                int value = nums[j];
                st[value]++;
                j++;
            }
        }

        int start = st.begin()->first;
        int end = (--st.end())->first;
        if(abs(end - start) <= limit) {
            ans = max(ans, j-i);
        }

        return ans;
    }
};