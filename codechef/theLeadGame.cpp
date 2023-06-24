#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr1[n];
	int arr2[n];
	int max1=0;
	int max2=0;
	int c1=0;
	int c2=0;
	for(int i=0;i<n;i++){
	    cin>>arr1[i];
	    cin>>arr2[i];
	}
	for(int i=0;i<n;i++){
	    c1+=arr1[i];
	    c2+=arr2[i];
	    if(c1>c2){
	        int lead1= c1-c2;
	        if(lead1>max1){
	            max1=lead1;
	        }
	    }
	    else{
	        int lead2 = c2-c1;
	        if(lead2>max2){
	            max2=lead2;
	        }
	    }
	}
	if(max1>max2){
	    cout<<"1 "<<max1;
	}
	else{
	    cout<<"2 "<<max2;
	}
	return 0;
}