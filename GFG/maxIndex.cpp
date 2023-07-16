//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        vector < int > v_min(n), v_max(n);
      v_min[0] = arr[0];
      v_max[n - 1] = arr[n - 1];
      for (int i = 1; i < n; i++) {
        v_min[i] = min(v_min[i - 1], arr[i]);
        v_max[n - i - 1] = max(v_max[n - i], arr[n - i - 1]);
      }
      int ans = 0, i = 0, j = 0;
      while (i < n && j < n) {
        if (v_min[i] <= v_max[j]) {
          ans = max(ans, j - i);
          j++;
        } else i++;
      }
      return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends