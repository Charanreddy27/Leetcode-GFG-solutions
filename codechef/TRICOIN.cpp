#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0,count=0;
	    cin>>n;
	    int i=0;
	    while(n>sum){
	        i++;
	        sum+=i;
	        count++;
	    }
	    if(sum==n){
	        cout<<count<<endl;
	    }else{
	        cout<<count-1<<endl;
	    }
	    
	}
	return 0;
}