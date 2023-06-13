class Solution {
public:
    int tribonacci(int n) {
        int n1 =0,n2=1,n3=1;
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(n==3) return 2;
        int res;
        for(int i=2;i<n;i++){
             res = n1+n2+n3;
            n1=n2;
            n2=n3;
            n3=res;

        }
        return res;
    }
};