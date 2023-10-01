int rec(int n,int last,vector<vector<int>> &points){
    if(n==0){
        int maxi=0;                     
        for(int i=0; i<3;i++){
            if(i!=last){
                maxi= max(maxi,points[0][i]);
            }
        }
        return maxi;
    }
    int maxi=0;
    for(int i=0;i<3;i++){
        if (i != last) {
            int point = points[n][i] + rec(n - 1, i, points);

            maxi = max(maxi, point);
        }
    }
    return maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    return rec(n-1,3,points);
}