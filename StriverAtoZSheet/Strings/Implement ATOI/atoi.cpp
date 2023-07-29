class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n = s.size();
        while(s[i]==' '){
            i++;
        }
        int p=0,ne=0;
        if(s[i]=='+'){
            p++;
            i++;

        }
        if(s[i]=='-'){
            ne++;
            i++;
        }
        double ans =0;
        while(i<n and s[i]>='0' and s[i]<='9'){
            ans = ans*10 + (s[i]-'0');
            i++;
        }
        if(ne>0) ans = - ans;
        if(p>0 and ne>0) return 0;
        if(ans>INT_MAX) ans = INT_MAX;
        if(ans<INT_MIN) ans = INT_MIN;
        return (int)ans;
    }
};