#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    int ca,cb;
	    if(q<a*p) 
	    cout<<-1<<endl;
	    else{
	        cb=(q-a*p)/(b-a);
	        if(cb>p) cb=p;
	        ca=p-cb;
	        cout<<ca<<" "<<cb<<endl;
	    }
	}
	return 0;
}