class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans ="";
        int count =0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='(' and count ==0){
                count++;
            }
            else if(s[i]=='(' and count>=1){
                ans+=s[i];
                count++;
            }
            else if(s[i]==')' and count>1){
                ans+=s[i];
                count--;

            }
            else if(s[i]==')' and count==1){
                count--;
            }
        }
        return ans;
    }
};