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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll>pre(n),suf(n);
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
       pre[i]=max(pre[i-1],a[i]);
    }
    suf[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
       suf[i]=max(suf[i+1],a[i]);
    }
    ll ans=a[0];
    for(int i=1;i<n-1;i++)
    {
       ans+=min(pre[i],suf[i]);
    }
    ans+=a[n-1];
    cout<<ans<<endl;
}
    return 0;
}