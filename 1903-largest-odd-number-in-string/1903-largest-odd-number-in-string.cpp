class Solution {
public:
    string largestOddNumber(string num) {
        // string ans ="";
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0') %2 !=0){
                cout<<num[i]<<endl;
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};