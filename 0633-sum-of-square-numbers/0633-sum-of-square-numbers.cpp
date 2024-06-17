class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)return 1;
        for(int i=0;i<sqrt(c);i++){
            int a=c-(i*i);
            int b=sqrt(a);
            if(a==b*b)return 1;
        }
        return 0;
    }
};