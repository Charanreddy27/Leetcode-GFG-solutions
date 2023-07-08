#include <bits/stdc++.h>

using namespace std;


int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--) {
	  long long n,s,x=1000000001;
	  int a[32];
	  cin>>n;
	  for(int i=0;i<32;i++){a[i]=pow(2,i);}
	   for(int i=0;i<32;i++){for(int j=i+1;j<32;j++)
	     {s=a[i]+a[j];x=min(x,abs(s-n));}
	   }
	   cout<<x<<endl;
	}
	return 0;
}