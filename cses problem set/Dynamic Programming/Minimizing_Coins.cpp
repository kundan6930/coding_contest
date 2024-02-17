#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n;
ll solve(vector<ll>&coins,ll x, vector<ll>&dp)
{
   if(x<0 )
   {
    return 1e9;
   }
   if(x==0)
   {
    return 0;
   }
   if(dp[x]!=-1)
   {
     return dp[x];
   }
   ll mini=LLONG_MAX;
   for(int i=0;i<n;i++)
   {
     //cout<<i<<" "<<pos<<" "<<x-coins[i]<<endl;
     mini=min(mini,solve(coins,x-coins[i],dp)+1);
    // cout<<mini<<" "<<i<<" "<<pos<<" "<<x-coins[i]<<endl;
   }
   return dp[x]= mini;
}
int main ()
{
  ll x;
  cin>>n>>x;
  vector<ll>coins(n);
  for(int i=0;i<n;i++)
  {
    cin>>coins[i];
  }
 vector<ll>dp(x+1,-1);
 ll ans=solve(coins,x,dp);
 if(ans>=1e9)
 {
    cout<<"-1"<<endl;
 }
 else
 {
    cout<<ans<<endl;
 }

  return 0;
}