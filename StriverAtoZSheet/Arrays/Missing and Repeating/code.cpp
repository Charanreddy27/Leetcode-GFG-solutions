/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* repeatedNumber(const int* A, int n1, int *len1) {
    int repeat,missing,i;
    missing=0;
    repeat=0;
    sort(A,A+n1);
    for(i=0;i<n1;i++){
        if(A[i] == A[i+1]){
            return *A[i];
        }
    }
    for(i =0;i<n1-1;i++){
        if(A[i]+1 != A[i+1] || A[i] != A[i+1])
        {
            return A[i] + 1;
        }
    }
}
