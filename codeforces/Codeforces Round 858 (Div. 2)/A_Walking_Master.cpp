#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int a,b,c,d,ans=0;
     cin>>a>>b>>c>>d;
     if(d<b)
     {
        cout<<"-1"<<endl;
     }
     else
     {
       int k=d-b;
       ans+=k;
       if(a+k<c)
       {
        cout<<"-1"<<endl;
       }
       else
       {
         ans+=((a+k)-c);
         cout<<ans<<endl;
       }
     }

        
    }
    return 0;
    }