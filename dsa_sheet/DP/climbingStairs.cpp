//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    #define mod 1000000007
    //Function to count number of ways to reach the nth stair.
    int solve(int n, vector<int>&dp){
        
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]%mod+dp[i-2]%mod;
        }
        return (dp[n]%mod);
    }
    int countWays(int n)
    {
        // your code here
        
        vector<int>dp(n+1);
        int ans=solve(n, dp);
        return (ans%1000000007);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends