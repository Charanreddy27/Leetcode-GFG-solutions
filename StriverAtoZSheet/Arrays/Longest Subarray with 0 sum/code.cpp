//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
        int pre =0;
        int res =0;
        for(int i=0;i<n;i++){
            pre+=a[i];
            if(pre ==0) res =i+1;
           else{
               if(m.find(pre)!=m.end()){
                   res = max(res,i-m[pre]);
                   
               }
               else{
                   m[pre] = i;
               }
           }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends