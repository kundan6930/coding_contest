#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll m=1e9+7;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<ll>pre(n);
    pre[0]=0;
    ll s=a[0];
    for(ll i=1;i<n;i++)
    {
        s+=a[i];
        pre[i]=(i+1)*a[i]-s;
    }
    ll it,f=0;
    for(ll i=0;i<n;i++)
    {
        if(pre[i]>k)
        {
            f=1;
            it=i;
            break;
        }
    }
    if(f==1)
    {
        ll pos=it-1;
        ll r=k-pre[pos];
        ll d=r/(pos+1);
        ll r1=r%(pos+1);
        for(ll i=0;i<=pos;i++)
        {
            if(i<r1)
            {
              a[i]=a[pos]+d+1;
            }
            else{
                 a[i]=a[pos]+d;
            }
        }
    }
    else
    {
        ll r=k-pre[n-1];
        ll d=r/(n);
        ll r1=r%(n);
        for(ll i=0;i<n;i++)
        {  if(i<r1)
          {
           a[i]=a[n-1]+d+1;
          }
          else
          {
             a[i]=a[n-1]+d;
          }
        }
    }
    ll s1=0;
    vector<ll>suff(n);
    for(ll i=n-1;i>=0;i--)
    {
        s1+=a[i];
        suff[i]=s1; 
    }
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
       ans+=(((a[i])*(suff[i+1]%m))%m);
       ans%=m;
    }
  cout<<ans<<endl;
}
    return 0;
}