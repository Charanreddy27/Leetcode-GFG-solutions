#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num;
	    int up,down;
	    cin>>num>>up>>down;
	    int a[num];
	    for(int i=0;i<num;i++){
	        cin>>a[i];
	    }
	    int temp=1;
	    int count=1;
	    
	    for(int i=0;i<num-1;i++){
	        if(a[i+1]-a[i]>up){
	            break;
	        }
	        else if(a[i]-a[i+1]>down){
	            if(temp){
	                count++;
	                temp--;
	            }
	            else{
	                break;
	            }
	        }
	        else{
	            count++;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}