class Solution {
public:
    string decodeAtIndex(string s, int k) {
//         string res ="";
//         for(int i=0;i<s.size();i++){
//             if(!isdigit(s[i])){
//                 res+=s[i];
//             }
//             else{
//                 int digit = s[i]-'0';
//                 string temp = res;
//                 for(int i=0;i<digit-1;i++){
//                     res+=temp;
//                 }
//             }
//         }
//         cout<<res;
//         if(res[k+1]){
//             string ans ="";
//                 ans+=res[k-1];
            
//             return ans;
//         // return res[k+1];
        // }
        // else return "";
         long long len = 0;
        int n = s.size();
        
        for(auto it : s){
            if(isdigit(it)){
                len = len * (it - '0');
            }
            else{
                len++;
            }
        }
        string val ;
        for(int i = n - 1 ; i >= 0 ; --i){
            k %= len;
            if((k == 0 || len == k) && (s[i] >= 'a' && s[i] <= 'z')){ 
                val.push_back(s[i]);
                break;
            }
            if(isdigit(s[i])){
                len /= s[i] - '0';
            }
            else{ 
                len--;
            }
        }
        return val;
            
    
    }
};