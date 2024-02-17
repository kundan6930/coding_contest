#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
     ll solve(ll n, ll pow,ll mod)
    {
      if(n<=0 ) 
      {
          return 1;
      }
      else if(n%2==0)
      {
           ll y=solve(n/2,pow,mod);
           return (y*y)%mod;
      }
    
     else
     {
           return ((pow%mod)*solve(n-1,pow,mod))%mod;
     }
  }
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
     ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     ll o=0,e=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    ans=solve(e,2,mod);
    ans%=mod;
     if(o==0)
    {
        ans-=1;
    if(ans<0)
    {
          ans=(ans+mod)%mod;
     }
    }
   
    cout<<ans<<endl;
}
    return 0;
}