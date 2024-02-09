#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,x;
int solve(vector<int>&a,int pos,int k, vector<vector<int>>&dp)
{
    if(pos==n-1)
    {
        return 0;
    }
    if(dp[pos][k]!=-1)
    {
        return dp[pos][k];
    }
    int curr=a[pos]^(k*x);
    int p1=a[pos+1]^x;
    int p2=a[pos+1];
    int l=solve(a,pos+1,1,dp)+abs(curr-p1);
    int r=solve(a,pos+1,0,dp)+abs(curr-p2);
    return dp[pos][k]=max(l,r);
}
int main (){
int t;
cin>>t;
while(t--)
{
    
    cin>>n>>x;
    vector<int>a(n);
    vector<vector<int>>dp(n+1,vector<int>(2,-1));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
   int ans=max(solve(a,0,0,dp),solve(a,0,1,dp));
    cout<<ans<<endl;
}
    return 0;
}