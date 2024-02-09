#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
 vector<vector<ll>>ans1;
ll solve(ll n,vector<ll>&dp,vector<ll>&ans)
{   if(n==0)
     {
       ans1.push_back(ans);
       return 1;
     }
    if(n<0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
         // ans1.push_back(ans);
        return dp[n];
    }
    ll c=0;
    for(ll i=1;i<=6;i++)
    {
        ans.push_back(i);
       c+=solve(n-i,dp,ans);
      ans.pop_back();
       
    }
    return dp[n]=c%mod;
}
int main ()
{
    ll n;
    cin>>n;
    vector<ll>dp(n+1,-1);
    vector<ll>ans;
    cout<<solve(n,dp,ans)<<endl;
    for(int i=0;i<ans1.size();i++)
    {
        for(int j=0;j<ans1[i].size();j++)
        {
            cout<<ans1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }