#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
vector<ll>solve(ll n)
{
    vector<ll>p_fac;
     for(ll i=2;i*i<=n;i++)
     {
        int f=0;
        while(n%i==0)
        {
            n/=i;
            f=1;
        }
        if(f==1)
        {
            p_fac.push_back(i);
        }
     }
     if(n>1)
     {
       p_fac.push_back(n); 
     }
     return p_fac;
}
int main (){
  ll n;
    cin>>n;
    vector<ll>a(n);
    map<vector<ll>,ll>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[solve(a[i])]++;
    }
    ll ans=1;
    for(auto i:m)
    {
       ans*=i.second;
       ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}