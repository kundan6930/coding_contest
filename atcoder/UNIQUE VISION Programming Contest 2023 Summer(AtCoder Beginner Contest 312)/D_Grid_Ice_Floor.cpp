#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(vector<vector<char>>&a,int r,int c,vector<vector<int>>&dp)
{
   if(a[r][c]=='#')
   {
     return 0;
   }
   if(dp[r][c]!=-1)
   {
    return dp[r][c];
   }
   a[r][c]='#';
   int l=solve(a,r,c-1,dp)+1;
   int ri=solve(a,r,c+1,dp)+1;
   int u=solve(a,r-1,c,dp)+1;
   int d=solve(a,r+1,c,dp)+1;
   a[r][c]='.';
   return dp[r][c]=max({l,ri,u,d});
}
int main (){
int n,m;
cin>>n>>m;
vector<vector<char>>a(n,vector<char>(m));
vector<vector<int>>dp(n,vector<int>(m,-1));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
cout<<solve(a,1,1,dp)<<endl;
    return 0;
}