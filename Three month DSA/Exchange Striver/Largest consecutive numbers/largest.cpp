int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int longest =0;
    unordered_set<int> s;
    for(int i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    for(auto it:s){
        if(s.find(it-1)==s.end()){
            int c =1;
            int x =it;
            while(s.find(x+1)!=s.end()){
                c++;
                x=x+1;
            }
            longest = max(c,longest);
        }
    }
    return longest;
}