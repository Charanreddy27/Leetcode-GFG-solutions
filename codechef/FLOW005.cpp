#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> v;
	    v.push_back(100);
	    v.push_back(50);
	    v.push_back(10);
	    v.push_back(5);
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