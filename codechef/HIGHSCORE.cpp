#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        cout<<a[3]<<endl;
    }
    return 0;
}
