#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define kaise_hai_aap_log() ll t; cin>>t; while(t--)
#define sorty(pp) pp.begin(),pp.end()
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void solve()
{
    
    string s;
    cin>>s;
    
stack<char> st;
int n = s.size();
int c = 0;
int ans = 0;
for( int i = 0 ; i<n ; i++ )
{
   if(s[i] == '<')
   {
       st.push(s[i]);
   }
   else
   {
       
       if(!st.empty())
       {
           st.pop();
           c++;
           if(st.empty())
           {
               ans += c*2;
               c = 0;
           }
       }
       else
       {
           
           cout<<ans<<endl;
           return;
           break;
       }
       
   }
}

cout<<ans<<endl;
}

int main() {
// your code goes here

ios_base::sync_with_stdio(false);
cin.tie(NULL);//this will make our input/out fast
kaise_hai_aap_log()
{
solve();
}
return 0;
}