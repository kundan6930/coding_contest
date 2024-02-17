#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,p,k;
ll solve(vector<vector<int>>&a,int pos,vector<int>&b,map<pair<int,vector<int>>,ll>&dp)
{
    if(pos==n)
    {
        // for(int i=1;i<=k;i++)
        // {
        //   cout<<b[i]<<" ";
        // }
        // cout<<endl;
        for(int i=1;i<=k;i++)
        {
            if(b[i]<p)
            {
                return (ll)1e12;
            }
        }
        return (ll)0;
    }
    if(dp[{pos,b}]>0)
    {
        return dp[{pos,b}];
    }
    ll l=solve(a,pos+1,b,dp);
    for(int i=1;i<=k;i++)
    {
        b[i]+=a[pos][i];
    }
   ll r= solve(a,pos+1,b,dp)+(ll)a[pos][0];
    for(int i=1;i<=k;i++)
    {
        b[i]-=a[pos][i];
    }
   //cout<<l<<" "<<r<<" "<<pos<<" "<<(ll)a[pos][0]<<" "<<min(l,r)<<endl;
   return dp[{pos,b}]=min(l,r);

}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>k>>p;
//cout<<n<<k<<p<<endl;
vector<vector<int>>a(n,vector<int>(k+1));
for(int i=0;i<n;i++)
{
    for(int j=0;j<=k;j++)
    {
        cin>>a[i][j];
    //    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

vector<int>b(k+1,0);
map<pair<int,vector<int>>,ll>dp;
ll ans=solve(a,0,b,dp);
if(ans>=1e12)
{
    cout<<"-1"<<endl;
}
else{
    cout<<ans<<endl;
}
    return 0;
}