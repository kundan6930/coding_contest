#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,c;
ll solve(vector<pair<ll,ll>>&a,vector<ll>&prefix_sum,ll pos)
{
    ll s=0;
    ll e=n,ans=0,maxi=0;
    ll temp_c=c-a[pos].second;
    
    while(s<=e)
    {
       int m=(s+e)/2;
       ll temp=prefix_sum[m];
       if(m>pos)
      {
        temp-=a[pos].first;
        ans=m;
      }
      else
      {
        ans=m+1;
      }
       if(temp<=temp_c)
       {
          maxi=ans;
          s=m+1;
       }
       else
       {
        e=m-1;
       }
 }
 return maxi;
}
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    { 
        
        cin>>n>>c;
        vector<pair<ll,ll>>a(n);
        vector<ll>prefix_sum(n+1);
        ll k;
        for(ll i=0;i<n;i++)
        {
          cin>>k;
          ll p=i+1;
          ll f=n-i;
          a[i]={k+min(p,f),k+i+1};
        }
        sort(a.begin(),a.end());
        prefix_sum[0]=0;
        for(ll i=0;i<n;i++)
        {
            prefix_sum[i+1]=prefix_sum[i]+a[i].first;
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
          ans=max(ans,solve(a,prefix_sum,i));
        }
        cout<< ans<<endl;  
    }
     
    return 0;
}