#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{

    ll n,q;
    cin>>n>>q;
  while(q--)
  {
     ll x;
     cin>>x;
     ll s=(n*(n+1))/2; 
     if(x<=s)
     {
         ll p=x*2;
         ll ans=sqrt(p);
         ll k=(ans*(ans+1))/2;
         if(x<=k)
         {
            cout<<ans<<endl;
         }
         else{
            cout<<ans+1<<endl;
         }
     }
     else
     {
         ll sq=(n*n)+1;
         ll p1=(sq-x);
         ll p=2*p1;
         ll ans=sqrt(p);
         ll k=(ans*(ans+1))/2;
         if(p1<=k)
        {
            ans=2*n-ans;
            cout<<ans<<endl;
        }
        else
        {
            ans=2*n-(ans+1);
            cout<<ans<<endl;
        }
     }
  }
    return 0;
}