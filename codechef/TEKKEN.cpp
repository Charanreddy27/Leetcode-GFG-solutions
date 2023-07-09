#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>abs(b-c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}