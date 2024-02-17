#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n;
ll solve(string &s, ll pos,ll p,vector<vector<ll>>&dp)
{
    if(pos==n)
    {
        if(p%9==0)
        {
            return (ll)1;
        }
        return (ll)0;
    }
    if(dp[pos][p]!=(ll)-1)
    {
        return dp[pos][p];
    }
    ll ans=(ll)0;
   // cout<<pos<<" "<<p<<endl;
    if(s[pos]=='?')
    {
        ll i=(ll)0;
        if(pos==(ll)0)
        {
            i=1;
        }
        for( ;i<10;i++)
        {
            ans+=(ll)solve(s,pos+1,(p+i)%(ll)9,dp);
        }
    }
    else{
        ans+=(ll)solve(s,pos+1,(ll)(p+s[pos]-'0')%(ll)9,dp);
    }
    return dp[pos][p]=ans;
}
int main (){
ll t;
cin>>t;
while(t--)
{
    cin>>n;
    string s;
    cin>>s;
    vector<vector<ll>>dp(n+(ll)1,vector<ll>(10,(ll)-1));
    cout<<solve(s,0,0,dp)<<endl;
    
}
    return 0;
}