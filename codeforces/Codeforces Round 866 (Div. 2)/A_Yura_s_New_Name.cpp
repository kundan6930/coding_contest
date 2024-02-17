#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int n=s.length();
    int c=0;
    int ans=0;
    if(s=="^")
    {
        cout<<"1"<<endl;
    }
    else{
    for(int i=0;i<n;i++)
    {
       if(s[i]!='^')
       {
         c++;
       }
       else
       {
        if(c!=0)
        {
        ans+=(c-1);
        }
         c=0;
       }
    }
      if(c!=0)
        {
        ans+=(c-1);
        }
     if(s[0]=='_' && s[n-1]=='_')
     {
        cout<<ans+2<<endl;
     }
     else if(s[0]=='^' && s[n-1]=='^')
     {
        cout<<ans<<endl;
     }
     else
     {
        cout<<ans+1<<endl;
     }
}
}
    return 0;
}