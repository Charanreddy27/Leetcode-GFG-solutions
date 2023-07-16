//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
         if(N<=0)
    {
        return 0;
    }
    else if(N==1)
    {
        
        printf("move disk %d from rod %d to rod %d\n",N,from,to);
        return 1;
    }
    else
    {
     long long steps = 0;
        steps += toh(N-1,from,aux,to);
        printf("move disk %d from rod %d to rod %d\n",N,from,to);
        steps += toh(N-1,aux,to,from);
        return steps+1;
    }
    }
    

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends