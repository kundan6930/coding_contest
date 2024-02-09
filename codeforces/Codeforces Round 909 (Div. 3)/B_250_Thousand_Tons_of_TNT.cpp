#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    vector<ll>pre(n+1);
    pre[0]=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        pre[i+1]=pre[i]+a[i];
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(n%i==0)
        {
       ll maxi=0,mini=LLONG_MAX;
        for(ll j=i;j<=n;j+=i)
        {
             ll k=pre[j]-pre[j-i];
             maxi=max(maxi,k);
             mini=min(mini,k);
             //cout<<maxi<<" "<<mini<<" "<<i<<" "<<j<<endl;
        }
        ans=max(ans,maxi-mini);
        }
    }
    cout<<ans<<endl;
}
    return 0;
}