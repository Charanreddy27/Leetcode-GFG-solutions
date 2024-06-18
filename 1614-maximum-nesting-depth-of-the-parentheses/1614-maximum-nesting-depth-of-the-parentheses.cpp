class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int count =0;
        for(auto i :s){
            if(i=='('){
                count++;
                maxi = max(maxi,count);
            }
            else if(i==')'){
                count--;
            }
        }
        return maxi;
    }
};