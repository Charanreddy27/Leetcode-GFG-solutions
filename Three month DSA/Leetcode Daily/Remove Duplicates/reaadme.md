class Solution {
public:
    string removeDuplicateLetters(string s) {
       vector<char> st;
        int n = s.size();
        unordered_set<char> seen; 
        for (int i = 0; i < n; i++) {
            if (seen.find(s[i]) == seen.end()) {
                while (!st.empty() && s[i] < st.back() && s.find(st.back(), i) != string::npos) {
                    seen.erase(st.back());
                    st.pop_back();
                }
                st.push_back(s[i]);
                seen.insert(s[i]);
            }
        }

        return string(st.begin(), st.end());
    }
};