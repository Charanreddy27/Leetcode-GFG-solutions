//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
          int indxx=-1,indxy=-1,dist=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                indxx=i;
            }
            else if(a[i]==y){
                indxy=i;
            }
            if(indxx!=-1 && indxy!=-1){
                dist=min(dist,abs(indxx-indxy));
            }
        }
        return dist==INT_MAX?-1:dist;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends