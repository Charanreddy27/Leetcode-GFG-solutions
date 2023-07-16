//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        unordered_map<int,int> m;
        int pre =0;
        int res =0;
        for(int i=0;i<n;i++){
            pre+=a[i];
            if(pre == k) res =i+1;
            if(m.find(pre)==m.end()){
                m.insert({pre,i});
            }
            if(m.find(pre-k)!=m.end()){
                res = max(res,i-m[pre-k]);
            }
        }
        return res;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends