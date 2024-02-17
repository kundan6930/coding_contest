#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,mod=998244353;
ll solve(string &s,ll pos,ll k,vector<vector<ll>>&dp)
{
    if(k<pos-k)
    {
        return 0;
    }
    if(pos==n)
    {
      if(k==n-k)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
    if(dp[pos][k]!=-1)
    {
        return dp[pos][k];
    }
    if(s[pos]=='(')
    {
      return dp[pos][k]=solve(s,pos+1,k+1,dp)%mod;
    }
    else if(s[pos]==')')
    {
        return dp[pos][k]=solve(s,pos+1,k,dp)%mod;
    }
    else
    {
          return dp[pos][k]=(solve(s,pos+1,k+1,dp)%mod+solve(s,pos+1,k,dp)%mod)%mod;
    }
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
 string s;
 cin>>s;
 n=s.length();
 vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
 cout<<solve(s,0,0,dp)<<endl;
    return 0;
}