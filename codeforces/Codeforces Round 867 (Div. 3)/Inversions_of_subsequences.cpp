#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod =1e9+7;
using ll = long long;
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
    multiset<ll>s;
    s.insert(a[0]);
    vector<ll>lar(n);
    lar[0]=0;
    for(ll i=1;i<n;i++)
    {
        if(s.upper_bound(a[i])==s.end())
        {
           lar[i]=0;
        }
        else
        {
            lar[i]=1;
        }
       s.insert(a[i]);
    }
     multiset<ll>s1;
    s1.insert(a[n-1]);
    vector<ll>small(n);
    small[n-1]=0;
    for(ll i=n-2;i>=0;i--)
    {
        if(s1.upper_bound(0)==s1.end() || (*s1.upper_bound(0))>=a[i])
        {
           small[i]=0;
        }
        else
        {
            small[i]=1;
        }
       s1.insert(a[i]);
    }
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        if(lar[i]==0 && small[i]==0)
        {
            c++;
        }
    }
    ll p=solve(c,2,mod);
    if(c==n)
    {
      cout<<p-1<<endl;
    }
    else
    {
      cout<<p<<endl;
    }
    
}
    return 0;
}