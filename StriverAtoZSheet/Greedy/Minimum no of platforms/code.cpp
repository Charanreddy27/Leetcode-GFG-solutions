class Solution{
    public:
    struct platforms{
        int start;
        int end;
        int pos;
    };
    static bool comp(struct platforms p1,platforms p2){
        if(p1.end<p2.end) return true;
        else if(p1.end>p2.end) return false;
        else if(p1.pos<p2.pos) return true;
        else return false;
    }
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int count =1;
    	int d=0;
    	
    	for(int i=1;i<n;i++){
    	    if(arr[i] > dep[d] ){
    	       d++;
    	    }
    	    else{
    	        count++;
    	    }
    	}
    	return count;
    	
    }
};