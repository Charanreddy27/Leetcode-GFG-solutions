class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int Max =0;
        set<int> st;
        int start =0;
        int end =0;
        while(start <s.size()){
            auto it = st.find(s[start]);
            if(it == st.end()){
                if(start - end + 1 > Max){
                    Max = start - end + 1;
                }
                st.insert(s[start]);
                start++;
            }
        
            else{
                st.erase(s[end]);
                end++;
            }
        
    }
    return Max;
    }
};