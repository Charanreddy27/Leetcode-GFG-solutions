//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
     static bool compare(struct Item a,struct Item b){
    double val1=((double)a.value)/(a.weight);
    double val2=((double)b.value)/(b.weight);

    return val1>val2;
}
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,compare);
        int curr=0;
        double sol =0;
        for(int i=0;i<n;i++){
            if(curr+arr[i].weight <=W){
                curr+=arr[i].weight;
                sol+=arr[i].value;
            }
            else{
                int half = W-curr;
                sol+= arr[i].value*((double)half/arr[i].weight);
                break;
            }
        }
        return sol;
        
    }
        
};