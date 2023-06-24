#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int count=0;
	    int m;
	    cin>>m;
	    int arr[m];
	    for(int i=0;i<m;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<m;i++){
	        if(arr[i]>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}