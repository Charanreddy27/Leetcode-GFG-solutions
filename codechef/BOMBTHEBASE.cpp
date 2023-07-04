#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,count=0;
	    cin>>n>>x;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]<x)
	            count=i+1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}