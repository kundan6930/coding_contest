#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll solve( vector<ll>&a, vector<ll>&b,ll n,ll m,ll h)
{
    ll sum=0;
      for(int i=0;i<min(n,m);i++)
      {
          sum+=(min(a[i],(h*b[i])));
      }
    // //  cout<<sum<<" "<<mid<<endl;
    //   if(sum>=mid)
    //   {
    //     return true;
    //   }
    //   return false;
    return sum;
}
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll>a(n),b(m);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    // ll s=0,e=sum,ans;
    // while(s<=e)
    // {
    //     ll mid=(s+e)/2;
    //    // cout<<mid<<" "<<solve(a,b,mid)<<endl;
    //     if(solve(a,b,mid))
    //     {
    //         ans=mid;
    //         s=mid+1;
    //     }
    //     else
    //     {
    //       e=mid-1;
    //     }
    // }
    ll ans=solve(a,b,n,m,h);
    cout<<ans<<endl;
}
    return 0;
}