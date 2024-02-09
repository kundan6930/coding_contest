#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
 vector<vector<ll>>ans1;
ll solve(ll n,vector<vector<ll>>&dp,int pos,vector<ll>&ans)
{   
    if(n<0 || pos>6)
    {
        return 0;
    }
    if(n==0)
     {
        ans1.push_back(ans);
       return 1;
     }
    
    // if(dp[n][pos]!=-1)
    // {
    //     return dp[n][pos];
    // }
    ll c=0;
    for(ll i=pos;i<=6;i++)
    {  
        ans.push_back(i);
       c+=solve(n-i,dp,i,ans);
       ans.pop_back();
    }
    return dp[n][pos]=c%mod;
}
int main ()
{
    ll n;
    cin>>n;
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
    vector<ll>ans;
    cout<<solve(n,dp,1,ans)<<endl;
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