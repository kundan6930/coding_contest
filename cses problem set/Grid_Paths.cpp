#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int mod=1e9+7;
bool safe(int r,int c,vector<vector<char>>&a)
{
    if(r<0 || c<0 || r>=n || c>=n || a[r][c]=='*')
    {
        return false;
    }
    return true;
}
int solve(vector<vector<char>>&a,int r,int c,vector<vector<int>>&dp)
{
     if(!safe(r,c,a))
    {
       return 0;
    }
    if(r==n-1 && c==n-1)
    {
        return 1;
    }
    if(dp[r][c]!=-1)
    {
        return dp[r][c];
    }
    a[r][c]='*';
   int l= solve(a,r+1,c,dp);
   int ri= solve(a,r,c+1,dp);
   a[r][c]='.';
   //cout<<r<<" "<<c<<" "<<l<<" "<<ri<<endl;
   return  dp[r][c]=(l%mod+ri%mod)%mod;
}
int main (){
cin>>n;
vector<vector<char>>a(n,vector<char>(n));
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}
vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
cout<<solve(a,0,0,dp)<<endl;
    return 0;
}