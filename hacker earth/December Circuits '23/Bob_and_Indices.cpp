#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n),b(n),c(n);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
          mp[a[i]]++;
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(mp[b[c[i]]]>0)
        {
          ans+=(ll)mp[b[c[i]]];
        } 
    }
    cout<<ans<<endl;
}
    return 0;
}