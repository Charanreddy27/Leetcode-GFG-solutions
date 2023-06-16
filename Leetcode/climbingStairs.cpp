class Solution {
public:
    int climbStairs(int n) {
        if(n==0 or n==1){
            return n;
        }
        int a=0;
        int b=1;
        int sum;
        for(int i=0;i<n;i++){
            sum = a+b;
            a=b;
            b=sum;
        }
        return sum;

    }
};