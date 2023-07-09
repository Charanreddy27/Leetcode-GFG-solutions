#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    if(n%5==0 && k%5==0)
	        cout<<n/5-k/5<<endl;
	    else if(n%5==0 && k%5!=0)
	        cout<<n/5-k/5-1<<endl;
	    else if(n%5!=0 && k%5==0)
	        cout<<n/5-k/5+1<<endl;
	    else
	        cout<<n/5-k/5<<endl;
	}
	return 0;
}