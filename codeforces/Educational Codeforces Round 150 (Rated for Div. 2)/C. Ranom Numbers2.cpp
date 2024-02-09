#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve1(int k)
{
  
  ll ans=1;
  while(k>0)
  {
    ans*=10;
    k--;
  }
  return ans;
}
ll n;
ll solve(ll pos,string &s,ll k ,ll maxi,vector<vector<vector<ll>>>&dp)
{
    if(pos<0)
    {
        return 0;
    }
    if(dp[pos][k][maxi]!=-1)
    {
        return dp[pos][k][maxi];
    }
    ll p=1;
     ll te=(s[pos]-'A');
    if(te<maxi)
    {
        p=-1;
    }
   // cout<<solve1(te)<<endl;
     ll maxi1=solve(pos-1,s,k,max(maxi,te),dp)+(p*solve1(te));
   //  cout<<maxi1<<" "<<pos<<endl;
    if(!k)
    {
        for(ll i=0;i<5;i++)
        {
            if(i!=(s[pos]-'A'))
            {
                p=1;
            if(i<maxi)
            {
                p=-1;
            }
            maxi1=max(maxi1,solve(pos-1,s,1,max(maxi,i),dp)+(p*solve1(i)));
            }
        }
    }
  // cout<<maxi1<<" "<<pos<<endl;
     return dp[pos][k][maxi]=maxi1;
}
int main (){
int t;
cin>>t;
while(t--)
{
     string s;
    cin>>s;
     n=s.length();
     //cout<<n<<endl;
     
     vector<vector<vector<ll>>>dp(n+1,vector<vector<ll>>(2,vector<ll>(5,-1)));
   cout<<solve(n-1,s,0,0,dp)<<endl;
}
    return 0;
}