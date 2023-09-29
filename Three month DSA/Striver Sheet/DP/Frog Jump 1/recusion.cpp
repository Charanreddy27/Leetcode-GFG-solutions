#include <bits/stdc++.h> 
int rec(int n,vector<int> &heights){
    if(n==0) return 0;
    int right=INT_MAX;

    int left = rec(n-1,heights)+abs(heights[n]-heights[n-1]);
    if(n>1) right = rec(n-2,heights)+abs(heights[n]-heights[n-2]);
    return min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    return rec(n-1,heights);
    
}