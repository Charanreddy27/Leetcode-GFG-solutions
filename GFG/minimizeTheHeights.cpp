Problems
Courses
Job-a-ThonMEGA
Contests
POTD

Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-12-13 18:28:18	Correct	cpp	156 / 156	View
2022-12-13 18:28:06	Correct	cpp	156 / 156	View
2022-12-13 18:27:50	Wrong	cpp	1 / 156	View
2022-12-13 18:26:58	Wrong	cpp	1 / 156	View
2022-12-13 18:26:56	Wrong	cpp	1 / 156	View
2022-12-13 18:23:20	Wrong	cpp	1 / 156	View
2022-12-13 18:22:56	Wrong	cpp	1 / 156	View
2022-12-13 18:22:28	Wrong	cpp	1 / 156	View
2022-12-09 13:04:20	Wrong	cpp	1 / 156	View
2022-12-09 13:01:12	Wrong	cpp	4 / 156	View
2022-12-09 13:00:45	Wrong	cpp	1 / 156	View
2022-12-09 12:59:25	Wrong	cpp	1 / 156	View
2022-12-09 12:54:53	Wrong	cpp	1 / 156	View
2022-12-09 12:53:47	Wrong	cpp	1 / 156	View
2022-12-09 12:52:46	Wrong	cpp	1 / 156	View
C++ (g++ 5.4)
Average Time: 25m




Custom Input
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        int count =0;
        sort(arr,arr+(r+1));
        // for(int i=0;i<r;i++){
        //     // if(arr[i]!=arr[i+1]){
        //     //     count++;
        //     // }
        //     // if(k == count){
        //     //     return arr[i];
        //     // }
            
        // }
        return arr[k-1];
        return -1;
    }
};