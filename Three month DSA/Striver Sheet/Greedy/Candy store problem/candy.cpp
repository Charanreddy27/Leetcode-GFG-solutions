//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int buy =0;
        int free = N-1;
        int mini =0;
        while(buy<=free){
            mini+=candies[buy];
            free=free-K;
            buy++;
        }
        
        buy=N-1;
        free =0;
        int maxi=0;
        while(free<=buy){
            maxi+=candies[buy];
            buy--;
            free +=K;
        }
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends