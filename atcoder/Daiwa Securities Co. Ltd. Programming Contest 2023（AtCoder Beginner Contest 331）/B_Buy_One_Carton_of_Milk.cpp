#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,s,m,l;
ll solve(ll k,vector<ll>&a,ll pos,vector<ll>&b,vector<vector<ll>>&dp)
{
    if(k>=n)
    {
        return 0;
    }
    if(pos>=3)
    {
       if(k<n)
       {
         return 1e10;
       }
    }
    if(dp[k][pos]!=-1)
    {
        return dp[k][pos];
    }
    ll l=solve(k+b[pos],a,pos,b,dp)+a[pos];
    ll r=solve(k,a,pos+1,b,dp);
     return dp[k][pos]=min(l,r);
}
int main (){
cin>>n>>s>>m>>l;
vector<ll>a({s,m,l});
vector<ll>b({6,8,12});
vector<vector<ll>>dp(n+1,vector<ll>(4,-1));
cout<<solve(0,a,0,b,dp)<<endl;
    return 0;
}