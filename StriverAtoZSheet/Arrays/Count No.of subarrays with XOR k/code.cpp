int Solution::solve(vector<int> &A, int B) {
    int xr =0;
    map<int,int> mp;
    mp[xr]++;
    int cnt =0;
    for(int i=0;i<A.size();i++){
        xr = xr ^ A[i];
        int x = xr ^ B;
        cnt+=mp[x];
    }
    return cnt;
}
