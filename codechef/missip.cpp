#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]==arr[i+1]){
	            i++;
	        }
	        else{
	            cout<<arr[i]<<endl;
	            break;
	        }
	    }
	    
	    
	}
	return 0;
}