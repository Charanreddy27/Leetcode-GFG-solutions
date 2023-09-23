int uniqueBinaryTree(int a, int b){
    // Write your code here.
    if(a==b) return false;
    if((a==1 and b==2) or (a==2 and b==1)) return true;
    if((a==2 and b==3)or (a==3 and b==2)) return true;
    return false;
}