#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    int k,arr[3];
    cin>>k;
    for(int l=0;l<3;l++){
        cin>>arr[l];
    }
    sort( arr, arr+3); 
    cout<<((k-1)*arr[0]+arr[1])<<endl;
}
	return 0;
}