#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int solve(int pos, vector<int>&a,vector<int>&dp)
{     
     if(pos>n)
    {
         return 1e6;
    }
      if(pos==n)
      {
        return 0;
      }
      if(dp[pos]!=-1)
      {
        return dp[pos];
      }
      int l=solve(pos+1,a,dp)+1;
      int r=solve(pos+a[pos]+1,a,dp);
      return dp[pos]=min(l,r);
}
int main (){
int t;
cin>>t;
while(t--)
{

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>dp(n+1,-1);
    cout<<solve(0,a,dp)<<endl;
}
  
    return 0;
}