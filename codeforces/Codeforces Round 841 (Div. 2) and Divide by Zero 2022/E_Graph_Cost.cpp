#include <bits/stdc++.h>
using namespace std;
using ll=long long;
typedef pair<double, int> pi;
ll solve(vector<ll>&dp,ll m)
{
    ll cost=0;
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    for(int i=2;i<dp.size();i++)
    {
        if(dp[i]>=i-1)
          {
            pq.push({(double)i/(double)(i-1),i});
          }
    }
    while(!pq.empty() && m)
    {
       pair<double,ll>top=pq.top();
       pq.pop();
       ll se=top.second;
       ll c=dp[se]/(se-1);
       ll re=dp[se]%(se-1);
       if(m>(se-1)*c)
       {
          cost+=(c*se);
          m-=((se-1)*c);
       }
      else 
       { 
        if(m>=se-1)
        {
            ll p=m/(se-1);
            cost+=(p*se); 
            m-=p*(se-1);
        }
       }  
    }
    if(m!=0)
    {
        return -1;
    }
    else
    {
    return cost;
    }
    }
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       ll n,m;
       cin>>n>>m;
       ll e=floor(n/2);
       vector<ll>dp(e+1);
       for(ll i=e;i>=2;i--)
       {
        ll k=(n/i);
        dp[i]=(k*(k-1)/2);
        for(ll j=2;j*i<=n/2;j++)
        {
          dp[i]-=dp[j*i];
        }
       }
       cout<<solve(dp,m)<<endl;
    }
    return 0;
}