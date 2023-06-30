//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    
     int Find(int a[], int n,int dp[])
    {
    if(n<0)
    return 0;
        if(dp[n-1]!=INT_MIN){
        return dp[n-1];
    }
    dp[n-1]=max(Find(a,n-1,dp),a[n-1]+Find(a,n-2,dp)); 
    return dp[n-1];
    }
    int FindMaxSum(int a[], int n){
        int dp[n+1];
        for(int i=0;i<=n;i++){
          dp[i]=INT_MIN; 
        }
        return Find(a,n,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends