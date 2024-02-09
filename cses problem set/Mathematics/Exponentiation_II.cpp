#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod=1e9+7;
ll solve(ll pow, ll n)
{
    if(pow==0)
    {
        return 1;
    }
   else if(pow%2==0)
    {
        ll y=solve(pow/2,n);
        return ((y%mod)*(y%mod))%mod;
    }
    else
    {
           ll y=solve(pow-1,n);
        return ((n%mod)*(y%mod))%mod;
    }
}
ll solve1(ll pow1,ll pow2,ll n)
{
    if(pow2==1)
    {
        return solve(pow1,n);
    }
    else if(pow2%2==0)
    {
        ll y=solve1(pow1,pow2/2,n);
        return ((y%mod)*(y%mod))%mod;
    }
    else
    {
           ll y=solve1(pow1,pow2-1,n);
        return ((solve(pow1,n)%mod)*(y%mod))%mod;
    }
}
int main()
{
    ll n;
    cin>>n;
    vector<vector<ll>>a(n,vector<ll>(3));
    for(int i=0;i<n;i++)
    {
        
            cin>>a[i][0];
            cin>>a[i][1];
            cin>>a[i][2];
    }
    for(int i=0;i<n;i++)
    {
          cout<<solve1(a[i][1],a[i][2],a[i][0])<<endl;
    }
    return 0;
}