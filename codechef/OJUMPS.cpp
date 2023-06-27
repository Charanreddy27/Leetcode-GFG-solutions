#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long n;
	cin>>n;
	int x=n%6;
	if(x==1 or x==0 or x==3){
	    cout<<"yes";
	}
	else{
	    cout<<"no";
	}
	
	return 0;
}