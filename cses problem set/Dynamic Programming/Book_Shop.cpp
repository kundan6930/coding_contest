#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int solve(vector<int>&a,vector<int>&b,int x,int pos, vector<vector<int>>&dp)
{
   if(x<=0 || pos<0)
   {
    return 0;
   }
   if(dp[pos][x]!=-1)
   {
    return dp[pos][x];
   }
 //  cout<<pos<<" "<<x<<endl;
   int l=0,r=0;
   if(x-a[pos]>=0)
   {
     l=solve(a,b,x-a[pos],pos-1,dp)+b[pos];
   }
   if(x>=0)
   {
      r= solve(a,b,x,pos-1,dp);
   }
 // cout<<l<<" "<<r<<" "<<pos<<" "<<max(l,r)<<endl;
  return dp[pos][x] =max(l,r);
}
int main ()
{
 int x;
  cin>>n>>x;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }
 vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
  cout<<solve(a,b,x,n-1,dp)<<endl;
    return 0;
}