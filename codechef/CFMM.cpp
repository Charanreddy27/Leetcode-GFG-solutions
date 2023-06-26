#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int a=0;a<t;a++){
	    int n;
	    cin>>n;
	    string s;
	    string ans="";
	    for(int i=0;i<n;i++){
	        cin>>s;
	        ans+=s;
	    }
	    int c=0, o=0, d=0, e=0, h=0, f=0;
	    for(int i=0;ans[i]!='\0';i++){
	            if(ans[i]=='c')      c++;
                else if(ans[i]=='o') o++;       
                else if(ans[i]=='d') d++;    
                else if(ans[i]=='e') e++;
                else if(ans[i]=='h') h++;
                else if(ans[i]=='f') f++;
	        
	    }
	    int oo =min(o,min(d,min(h,f)));
	    int cc=min(e,c);
	    int res = min(cc/2,oo);
	    cout<<res<<endl;
	}
	return 0;
}