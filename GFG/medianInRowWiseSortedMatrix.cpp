//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here   
        vector<int> v;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        if((R * C) % 2 == 0){
        
            int median = (v[(R*C)/2 -1 ] + v[(R*C)/2]) / 2;
            return median;
            
        }
        else{
            int median = v[(R*C)/2];
            return median;
        }
    }
};