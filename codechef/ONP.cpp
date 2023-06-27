#include <iostream>
using namespace std;

int main() {
        int t, n, i, top;
string s;
char *st;
cin>>t;
while(t--)
{
   cin>>s;
   n= s.size();
   st= new char[n];
   top=0;
   st[top]= '(';
   for(i=0; i<n; i++)
   {
       if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
       {
           top++;
           st[top]= s[i];
       }
       else if(s[i]==')')
       {
           if(st[top]=='(')
               top--;
           else
           {
               while(st[top]!='(')
               {
                   cout<<st[top];
                   top--;
               }
               top--;
           }
       }
       else
           cout<<s[i];
   }
   while(s[top]!='(')
   {
       cout<<s[i];
       top--;
   }
   cout<<endl;
}
return 0;
}