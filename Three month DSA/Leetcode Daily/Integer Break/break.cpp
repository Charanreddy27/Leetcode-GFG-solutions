class Solution {
public:
    int integerBreak(int n) {
        if(n==2 or n==3) return n-1;
        if(n%3==0) return pow(3,n/3);
        if(n%3==1) return pow(3,(n/3)-1)*4;
        if(n%3==2) return pow(3,(n/3))*2;
        return -1;
    }
};