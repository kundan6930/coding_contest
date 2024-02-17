#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,a,b,c;
ll solve(vector<vector<ll>>&aa,ll pos,ll f,vector<ll>&vis,vector<vector<ll>>&dp)
{
   
     if(pos==n-1)
     {
        return 0;
     }
     if(dp[pos][f]!=-1)
     {
          dp[pos][f];
     }
     ll mini=1e16;
     for(int i=0;i<n;i++)
     {
        if(pos==i)
        {
            continue;
        }
       if(!vis[i])
       { 
         if(f==1)
         {
             vis[pos]=1;
           mini=min(mini,solve(aa,i,1,vis,dp)+(aa[pos][i]*a));
            vis[pos]=0;
         }
          vis[pos]=1;
          mini=min(mini,solve(aa,i,0,vis,dp)+(aa[pos][i]*b+c));
           vis[pos]=0;
       }
         
     }
    // vis[pos]=1;
     return dp[pos][f]=mini;
}
int main (){
cin>>n>>a>>b>>c;
vector<vector<ll>>aa(n,vector<ll>(n));
vector<ll>vis(n);
vector<vector<ll>>dp(n,vector<ll>(2,-1));
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>aa[i][j];
    }
}
cout<<solve(aa,0,1,vis,dp)<<endl;
    return 0;
}