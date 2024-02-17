#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
   ll solve(ll exp, ll base)
    {
        if(exp==0)
        {
            return 1;
        }
       if(exp%2==0)
        {
           ll y=solve(exp/2,base);
           return ((y%mod)*(y%mod))%mod;
        }
        else
         {
           return ((base%mod)*solve(exp-1,base))%mod;
        }
    }
int  main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
        for(ll i=1;i<n-1;i++)
        {
            ll p=0;
           for(ll j=i-1;j+i<n;j+=i)
           {
             ll k=(a[j]*a[j+i]);
             k%=mod;
             p+=k;
             p%=mod;
             cout<<k<<" "<<p<<endl;
           }
           ll k1=solve(n-i-(ll)1,(ll)2);
           ll k2=p*k1;
           k2%=mod;
           ans+=k2;
           ans%=mod;
        }
        cout<<ans<<endl;
}
    return 0;
}