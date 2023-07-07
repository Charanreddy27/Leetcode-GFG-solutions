#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
int t;
cin>>t;
while(t--) {
 int n; cin>>n;
 int a[n];
 for(int i=0;i<n;i++)cin>>a[i];
 if(n==1){cout<<"UNFIT"<<endl;continue;}
 int m=0,i=0,j=1;
 while(j<n){
     if(a[i]<a[j])m=max(m,a[j]-a[i]);
     else i=j;
     j++;
 }
 if(m)cout<<m<<endl;
 else cout<<"UNFIT"<<endl;
}
return 0;
}