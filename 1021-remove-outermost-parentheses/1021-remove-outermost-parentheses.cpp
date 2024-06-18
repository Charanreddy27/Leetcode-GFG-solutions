class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans ="";
        int count =0;
        for(auto i:s){
            if(i=='(' and count++ > 0) ans+= i;
            else if(i==')' and count-- >1) ans+=i;
            // cout<<count<<endl;
        }
        return ans;
    }
};