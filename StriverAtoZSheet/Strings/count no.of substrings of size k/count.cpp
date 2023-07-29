int countSubStrings(string str, int k) 
{
    // Write your code here.
    int res=0;
    int n = str.length();
    int cnt[26];
    for(int i=0;i<n;i++){
        memset(cnt,0,sizeof(cnt));
        int d =0;
        for(int j=i;j<n;j++){
            if(cnt[str[j]-'a']==0){
                d++;
            }
            cnt[str[j]-'a']++;
            if(d==k){
                res++;
            }
        }
        return res;
    }
}
