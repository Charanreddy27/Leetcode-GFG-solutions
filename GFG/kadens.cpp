Problems
Courses
Job-a-ThonMEGA
Contests
POTD

Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-12-22 13:55:28	Correct	cpp	10133 / 10133	View
2022-12-22 13:53:12	Wrong	cpp	1 / 10133	View
C++ (g++ 5.4)
Average Time: 20m



// } Driver Code Ends



Custom Input
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int current =0;
        int maxSum = INT_MIN;
        for(int i=0;i<n;i++){
            current += arr[i];
            if(current<0){
                current =0;
            }
            maxSum = max(maxSum,current);
            
        }
        if(maxSum==0){
            maxSum = arr[0];
            for(int i=1;i<n;i++){
                maxSum = max(maxSum,arr[i]);
            }
        }
        return maxSum;
    }
};