class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                ans+=temp+" ";
                temp="";
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};