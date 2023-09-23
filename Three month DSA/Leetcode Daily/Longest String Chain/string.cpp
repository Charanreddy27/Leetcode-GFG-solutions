class Solution {
public:
    static bool comp(string &s1,string &s2){
        return s1.length()<s2.length();
    }
    bool isSub(string t,string s){
        int j=0;
        for(int i=0; i<t.length();i++){
            if(t[i]==s[j]){
                j++;
            }
        }
        if(s.length()==j)return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int n = words.size();
        vector<int> v(n,1);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(isSub(words[i],words[j]) && words[i].length()==words[j].length()+1){
                    v[i] = max(v[i],v[j]+1);
                }
            }
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }
};