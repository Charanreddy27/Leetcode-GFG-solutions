class Solution {
public:
    int maxDepth(string s) {
        int maxd=0;
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(') count++;
            else if(s[i]==')'){
                count--;
            }
            maxd = max(maxd,count);
        }
        return maxd;
    }
};