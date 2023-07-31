class Solution {
public:
    void sortColors(vector<int>& arr) {
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;
            }
            else if(arr[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        int i=0;
        while(count0){
            arr[i]=0;
            count0--;
            i++;
        }
        while(count1){
            arr[i]=1;
            count1--;
            i++;
        }
        while(count2){
            arr[i]=2;
            count2--;
            i++;
        }
        
    }
};