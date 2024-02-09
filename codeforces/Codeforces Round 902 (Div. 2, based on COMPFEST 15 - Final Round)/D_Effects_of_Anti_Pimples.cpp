#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=998244353;
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
int main (){
ll n;
cin>>n;
vector<ll>a(n+1);
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
vector<ll>b(n+1,-1);
for(int i=1;i<=n;i++)
{
    
    for(int j=i;j<=n;j+=i)
    {
        b[i]=max(b[i],a[j]);
    }
    
}
// for(int i=1;i<=n;i++)
// {
//     cout<<b[i]<<" ";
// }
// cout<<endl;
sort(b.begin(),b.end(),greater<int>());
ll ans=0;
for(ll i=0;i<n;i++)
{
    ll k1=solve((n-i-(ll)1),(ll)2);
   // cout<<b[i]<<" "<<k1<<endl;
      ans+=((k1*b[i])%mod);
      ans%=mod;
}
cout<<ans<<endl;


    return 0;
}