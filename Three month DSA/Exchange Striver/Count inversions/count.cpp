void merge(vector<int>&a, int low, int mid, int high, int &ans){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> leftArray;
    for(int i=low; i<=mid; i++){
        leftArray.push_back(a[i]);
    }

    vector<int> rightArray;
    for(int i=mid+1; i<=high; i++){
        rightArray.push_back(a[i]);
    }

    leftArray.push_back(INT_MAX);
    rightArray.push_back(INT_MAX);

    int i = 0, j=0;

    while(i<n1 || j<n2){
        if(i==n1 && j==n2) break;
        if(leftArray[i] <= rightArray[j]){
            a[low+i+j] = leftArray[i];
            i++;
        }
        else{
            a[low+i+j] = rightArray[j];
            j++;
            ans+=n1-i;
        }
    }


}




void mergesort(vector<int>&a, int low,  int high, int &ans){
    if(low>=high) return;

    int mid = (low+high)/2;
    mergesort(a, low, mid, ans);
    mergesort(a, mid+1, high, ans);

    merge(a, low, mid, high, ans);

}



int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int ans = 0;
    mergesort(a,0, n-1, ans);

    // for(auto i: a){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    return ans;
}