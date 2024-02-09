#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
ll n;
void solve(vector<ll>&a,ll pos,ll s,vector<ll>&dp)
{
   if(pos==n)
   {
    dp[s+n]+=1;
    dp[s+n]%=mod;
    return ;
   }
 //  cout<<s<<endl;
   s+=a[pos];
   solve(a,pos+1,s,dp);
   s-=a[pos];
   solve(a,pos+1,s,dp);
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>n;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
vector<ll>dp(2*n+1,0);
solve(a,0,0,dp);
for(int i=0;i<dp.size();i++)
{
    if(i==n)
    {
        dp[i]=dp[i]-1;
    }
    cout<<dp[i]<<" ";
}
cout<<endl;
    return 0;
}