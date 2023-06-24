#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int min;
	    int max;
	    int count=0;
	    cin>>min>>max;
	    for(int i=min;i<=max;i++){
	        if(i%10==2 or i%10==3 or i%10==9){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}