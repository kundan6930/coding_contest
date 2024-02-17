#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll maxi;
ll solve(vector<ll>&a,ll pos,ll &n,ll k,ll &x,vector<vector<ll>>&dp)
{
   if(pos==n)
   {
     return 0;
   }
   if(dp[pos][k]!=-1)
   {
     return dp[pos][k];
   }
   //ll maxi=0;
   if(k==0)
   {
     ll l=solve(a,pos+1,n,k,x,dp)+a[pos]-x;
     if(l<0)
     {
           maxi=max(maxi,(ll)0);
          // cout<<pos<<" "<<l<<"*"<<maxi<<endl;
           return dp[pos][k]=0;
     }
     else
     {
        maxi= max(maxi,l);
       //  cout<<pos<<" "<<l<<"*"<<maxi<<endl;
        return dp[pos][k]=l;
     }
   }
   else 
   { ll l=0,r=0;
     if(n-(pos+1)-(k-1)>=0)
     {
       l=solve(a,pos+1,n,k-1,x,dp)+a[pos]+x;
     }
     if(n-(pos+1)-k>=0)
     {
       r=solve(a,pos+1,n,k,x,dp)+a[pos]-x;
     }
      
      //maxi=max(maxi,r);
     // cout<<pos<<" "<<l<<" "<<r<<" "<<max(l,r)<<"*"<<maxi<<endl;
      
      if(l<0)
      {
        l=0;
      }
      if(r<0)
      {
        r=0;
      }
      maxi=max({maxi,l,r});
    // cout<<pos<<" "<<l<<" "<<r<<" "<<max(l,r)<<endl;
      return dp[pos][k]=max(l,r);
   }
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        maxi=0;
        vector<vector<ll>>dp(n+1,vector<ll>(k+1,-1));
      solve(a,0,n,k,x,dp);
      cout<<maxi<<endl;
   }
    return 0;
    }