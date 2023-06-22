class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            int arr[2*n];
            for(int i=0;i<n;i++){
                arr[i]=ar1[i];
            }
            for(int i=0;i<n;i++){
                arr[n+i] = ar2[i];
            }
            sort(arr,arr+ 2*n);
            
            int sum = arr[n-1]+arr[n];
    }
};