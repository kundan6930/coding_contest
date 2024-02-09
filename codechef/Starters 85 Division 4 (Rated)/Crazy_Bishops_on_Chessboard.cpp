#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     ll n;
     cin>>n;
     if(n==1 || n==2)
     {
        cout<<"0"<<endl;
     }
     else
     {
        if(n%2!=0)
        {
            ll k=n/2;
            ll e=k-1;
            ll ans=2*k+e;
            cout<<ans<<endl;
        }
        else{
            ll k=(n/2)-1;
            ll e=k;
            ll ans=2*k+e;
            cout<<ans<<endl;
        }
     }


        
    }
    return 0;
    }