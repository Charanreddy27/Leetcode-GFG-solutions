#include <iostream>
using namespace std;
// #include<cmath>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
      
        for(int i=1;i<=n;i++){
            if(n%i==0)
                count++;
        }
        count!=2? cout<<"no\n" :cout<<"yes\n";
    }

	
}