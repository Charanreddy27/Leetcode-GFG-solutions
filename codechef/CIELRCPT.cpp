#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> v;
	    v.push_back(2048);
	    v.push_back(1024);
	    v.push_back(512);
	    v.push_back(256);
	    v.push_back(128);
	    v.push_back(64);
	    v.push_back(32);
	    v.push_back(16);
	    v.push_back(8);
	    v.push_back(4);
	    v.push_back(2);
	    v.push_back(1);
	    int n=v.size();
	    int amt;
	    cin>>amt;
	    int c=0,num,i=0;
	    while(i<n && amt>0){
	        num = amt/v[i];
	        amt -=num*v[i];
	        c+=num;
	        i++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}