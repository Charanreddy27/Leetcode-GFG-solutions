/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    static bool comp(struct Job j1,Job j2){
        if(j1.profit>j2.profit) return true;
        else if(j1.profit<j2.profit) return false;
        else if(j1.dead>j2.dead)return true;
        else return false;
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        // sort(arr,arr+n,comp);
        // int num=1;
        // int p = arr[0].profit;
        // int tot=1;
        // for(int i=1;i<n;i++){
        //     if(arr[i].dead != arr[i-1].dead){
        //         tot++;
        //     }
        // }
        // int s[tot];
        // s[0]= arr[0].profit;
        // for(int i=1;i<n;i++){
        //     // if(arr[i].dead == arr[i-1].dead){
        //     //     continue;
        //     // }
        //     // else {
        //     //     num++;
        //     //     p+=arr[i].profit;
        //     // }
        //     if(i<tot){
        //         s[i]=arr[i].profit;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // int sum=0;
        // for(int i=0;i<tot;i++){
        //     sum+=s[i];
        // }
        // vector<int> v;
        // v.push_back(tot);
        // v.push_back(sum);
        // return v;
        sort(arr,arr+n,comp);
        int e =0;
        for(int i=0;i<n;i++){
            e = max(e,arr[i].dead);
        }
        int s[e+1];
        for(int i=1;i<=e;i++){
            s[i]=-1;
            
        }
        s[arr[0].dead]= arr[0].profit;
        for(int i=1;i<n;i++){
            if(s[arr[i].dead]==-1){
                s[arr[i].dead]= arr[i].profit;
            }
            else{
                int j =arr[i].dead -1;
                while(j>0){
                    if(s[j]==-1){
                        s[j]= arr[i].profit;
                        break;
                    }
                    j--;
                    
                }
            }
        }
        int count =0;
        int sum=0;
        for(int i=1;i<=e;i++){
            if(s[i]!=-1){
                count++;
                sum+=s[i];
            }
            
        }
        vector<int> v;
        v.push_back(count);
        v.push_back(sum);
        return v;
        
    } 
};