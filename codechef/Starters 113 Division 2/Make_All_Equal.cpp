#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
  ll maxi=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    ll ans=0;
    ll maxi1=0;
    
    for(ll i=0;i<n;i++)
    {
       ans+=(maxi-a[i]);
       maxi1=max(maxi1,maxi-a[i]);
    }
    ll k=ans/m;
    if(ans%m!=0)
    {
        k++;
    }
    ll ans1=max(k,maxi1);
    cout<<ans1<<endl;
}
    return 0;
}