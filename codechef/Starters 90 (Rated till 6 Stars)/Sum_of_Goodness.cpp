#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll mod=1e9+7;
void fact(ll n,vector<ll>&fac)
{    fac[0]=1;
     fac[1]=1;
    for (int i = 2; i <= n; i++)
    {
        fac[i]=(fac[i-1]*i)%mod;
    }
}
ll nCr(ll n, ll r,vector<ll>&fac)
{
    return fac[n] /(fac[r] * fac[n - r]);
}
ll solve(ll n, ll pow,ll mod)
    {
      if(n==0 ) 
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
    int n;
    cin>>n;
    int a[n];
    vector<ll>fac(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    fact(n,fac);
    ll s=0;
   for(ll i=0;i<n;i++)
   {
         if(a[i]<=i+1)
         {
         s+=((((solve(n-i-1,2,mod))%mod)*(nCr(i,a[i]-1,fac)%mod))%mod);
         s%=mod;
         }
      //  cout<<s<<"*"<<endl;
   }
   cout<<s<<endl;
}
    return 0;
}