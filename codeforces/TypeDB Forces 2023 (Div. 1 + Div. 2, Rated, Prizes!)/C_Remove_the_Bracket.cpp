#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,s;
ll solve(vector<ll>&a,ll pos,vector<vector<ll>>&dp,ll pk,bool k)
{ 
    // cout<<pos<<endl;
     if(pos==n-1)
     {
        return pk*a[n-1];
     }
     if(dp[pos][k]!=-1)
     {
        return dp[pos][k];
     }
         ll min1,max1;
      //  cout<<v<<" "<<pos<<endl;
      if(a[pos]>=s)
      {
        min1=min(a[pos]-s,s);
        max1=max(a[pos]-s,s);
      }
      else
      {
            min1=0;
            max1=a[pos];
      }
         ll l=pk*min1+solve(a,pos+1,dp,max1,false);
         ll r=pk*max1+solve(a,pos+1,dp,min1,true);
         return dp[pos][k]=min(l,r);
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       cin>>n>>s;
       vector<ll>a(n);
       for(int i=0;i<n;i++)
       {
         cin>>a[i];
       }
       vector<vector<ll>>dp(n+1,vector<ll>(2,-1));
     cout<<solve(a,1,dp,a[0],true)<<endl;
    }
    return 0;
    }