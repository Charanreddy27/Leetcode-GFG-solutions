#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int sum=a[0]+a[n-1];
        
	     for(int i=0;i<n-1;i++)
	    {
	        int temp=a[i]+a[i+1];
	        
	        sum=max(sum,temp);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}