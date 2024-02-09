#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
bool solve(string &a,string &b,int s,int e,int i,vector<vector<int>>&dp)
{
    if(i<0)
    {
        return true;
    }
    if(dp[s][e]!=-1)
    {
        return dp[s][e];
    }
    if(b[s]==a[i] && b[e]==a[i])
    {
        return dp[s][e]=solve(a,b,s+1,e,i-1,dp) || solve(a,b,s,e-1,i-1,dp);
    }
    if(b[s]==a[i])
    {
        return dp[s][e]=solve(a,b,s+1,e,i-1,dp);
    }
    if(b[e]==a[i])
    {
        return dp[s][e]=solve(a,b,s,e-1,i-1,dp);
    }
    return dp[s][e]=false;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      
      cin>>n;
      string a,b;
      cin>>a;
      cin>>b;
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      bool k=solve(a,b,0,n-1,n-1,dp);
      if(k)
      {
        cout<<"Case 1: YES"<<endl;
      }
      else
      {
        cout<<"Case 2: NO"<<endl;
      }
        
    }
    return 0;
    }