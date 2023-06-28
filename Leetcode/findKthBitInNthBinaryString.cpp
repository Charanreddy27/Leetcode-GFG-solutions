class Solution {
public:

    string invert(string s){
      for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1'){
          s[i]='0';
        }
        else{
          s[i]='1';
        }
        
      }
      return s;
    }
    string reverser(string s){
      reverse(s.begin(),s.end());
      return s;
    }
    char findKthBit(int n, int k) {
      vector<string> s(n);
      s[0]="0";
      for(int i=1;i<n;i++){
          s[i]=s[i-1]+"1"+reverser(invert(s[i-1]));
      }  
      string res = s[n-1];
      char re = res[k-1];
      return re;
    }
};