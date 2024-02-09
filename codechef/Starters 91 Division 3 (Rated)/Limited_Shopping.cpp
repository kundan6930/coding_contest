#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(ll &n,ll k,ll k1, vector<ll>&a,ll pos, vector<vector<vector<ll>>>&dp)
{
   // cout<<pos<<" "<<k<<" "<<k1<<endl;
    if(pos==n)
    {
        return 0;
    }
    if(k1<=0)
    {
        return 0;
    }
    if(dp[pos][k][k1]!=-1)
    {
        return dp[pos][k][k1];
    }
    ll maxi=0;
    for(ll i=0;(i<=k && k1-i>=0);i++)
    { 
        maxi=max(maxi,solve(n,i+1,k1-i,a,pos+1,dp)+(i*a[pos]));
    }
    return dp[pos][k][k1]=maxi;
}
int main (){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<vector<vector<ll>>>dp(n+1,vector<vector<ll>>(k+1,vector<ll>(k+1,-1)));
  cout<<solve(n,1,k,a,0,dp)<<endl;
    return 0;
}