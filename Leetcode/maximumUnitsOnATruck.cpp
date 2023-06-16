class Solution {
public:
    static bool comp(vector<int> v,vector<int> u){
        return v[1]>u[1];

    }
    long long maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int i=0;
        long long  total =0;
        while(truckSize>0 and i<boxTypes.size()){
            if(boxTypes[i][0]<=truckSize){
                total+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                // int res = boxTypes[i][0]-truckSize;
                total+= truckSize * boxTypes[i][1];
                truckSize =0;
            }
            i++;
        }
    return total;
    }
    
};