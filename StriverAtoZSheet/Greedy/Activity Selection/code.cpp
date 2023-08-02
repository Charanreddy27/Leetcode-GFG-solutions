class Solution
{
    public:
    struct meetings{
        int start;
        int end;
        int pos;
    };
    static bool compare(struct meetings m1, meetings m2){
        if(m1.end<m2.end) return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos<m2.pos) return true;
        else return false;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meetings meeting[n];
        for(int i=0;i<n;i++){
            meeting[i].start = start[i];
            meeting[i].end = end[i];
            meeting[i].pos = i+1;
        }
        sort(meeting,meeting+n,compare);
        vector<int> v;
        int e = meeting[0].end;
        v.push_back(meeting[0].pos);
        for(int i=1;i<n;i++){
            if(meeting[i].start>e){
                e = meeting[i].end;
                v.push_back(meeting[i].pos);
            }
        }
        return v.size();
    }
};