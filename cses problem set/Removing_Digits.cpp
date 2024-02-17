#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int n,vector<int>&dp)
{
  if(n==0)
  {
    return 0;
  }
  if(dp[n]!=-1)
  {
    return dp[n];
  }
  int mini=1e9;
  int n1=n;
   while(n1)
   {
    int k=n1%10;
    if(k)
    {
      mini=min(mini,solve(n-k,dp)+1);
    }
    n1=n1/10;   
    }
  return dp[n]=mini;
}
int main (){
int n;
cin>>n;
vector<int>dp(n+1,-1);
cout<<solve(n,dp)<<endl;

    return 0;
}