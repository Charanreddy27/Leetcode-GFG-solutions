static bool cmp(Job a,Job b){
   return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        int maxideadline=INT_MIN;
        for( int i=0;i<n;i++){
            maxideadline=max(maxideadline,arr[i].dead);
        }
        
        vector<int>schedule(maxideadline+1,-1);
    int  totalprofit=0;
        int count=0;
        for(int i=0;i<n;i++){
        int currid=arr[i].id;
        int currdead=arr[i].dead;
        int currprofit=arr[i].profit;
            
            for(int k=currdead;k>0;k--){
                if(schedule[k]==-1){
                    count++;
                    totalprofit+=currprofit;
                    schedule[k]=currid;
                    break;
                }
            }
        }
        
       vector<int>ans;
       ans.push_back(count);
       ans.push_back(totalprofit);
       return ans;