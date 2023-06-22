class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> v;
        for(int i=0;i<K;i++){
            for(int j=0;j<arr.size();j++){
                v.push_back(arr[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};