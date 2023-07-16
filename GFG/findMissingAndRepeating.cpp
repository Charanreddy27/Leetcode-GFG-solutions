//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> v(2);
        int x;
        for(int i=0;i<n;i++)
        {
            x=abs(arr[i])-1;
            if(arr[x]<0)
            v[0]=abs(arr[i]);
            else
            arr[x]=-1*arr[x];
        }
        //find missing
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            v[1]=i+1;
        }
        return v;

    
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends