#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
 int t, r, c, flag;
 char a[105][105], e;
 scanf("%d", &t);
 while(t--) {
  memset(a, 0, sizeof(a));
  flag=0;
  scanf("%d%d", &r, &c);
  scanf("%c", &e);
  for(int i=0; i<r; i++) {
   for(int j=0; j<c; j++) scanf("%c", &a[i][j]);
   scanf("%c", &e);
  }
  for(int i=0; i<r; i++) {
   for(int j=0; j<c; j++) {
    if((a[i][j]=='s' || a[i][j]=='S') && (a[i+1][j]=='p' || a[i+1][j]=='P') && (a[i+2][j]=='o' || a[i+2][j]=='O') && (a[i+3][j]=='o' || a[i+3][j]=='O') && (a[i+4][j]=='n' || a[i+4][j]=='N')) {
     flag=1;
     break;
    }
    else if((a[i][j]=='s' || a[i][j]=='S') && (a[i][j+1]=='p' || a[i][j+1]=='P') && (a[i][j+2]=='o' || a[i][j+2]=='O') && (a[i][j+3]=='o' || a[i][j+3]=='O') && (a[i][j+4]=='n' || a[i][j+4]=='N')) {
     flag=1;
     break;
    }
   }
  }
  if(flag) printf("There is a spoon!\n");
  else printf("There is indeed no spoon!\n");
 }
 return 0;
}