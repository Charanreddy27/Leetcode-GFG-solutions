//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector <int> a(t);
	for(int i = 0; i< t ; i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int x : a)
	    cout<<x<<endl;
	return 0;
}



