#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(ll a,ll k)
{
    ll p=1;
    while(a>0)
    {
       p*=(a%10);
       a/=10;
    }//cout<<p<<endl;
    return (p%k);
}
int main (){
int t;
cin>>t;
while(t--)
{
    ll l,r,k;
    ll ans=0;
    cin>>l>>r>>k;
    for(ll i=l;i<=r;i++)
    { 
        ans+=(!solve(i,k))  ;  
    }
    cout<<ans<<endl;
}
    return 0;
}