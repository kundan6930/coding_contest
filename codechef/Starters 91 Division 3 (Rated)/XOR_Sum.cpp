#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    for(ll i=0;i<=60;i++)
    {
        ll a =((ll)1 << i);
        if(a>=l && a<=r)
        {
            ans+=(a-l);
           // cout<<ans<<" "<<a<<endl;
        }
    }
    if(l==0)
    {
        ans++;
    }
    cout<<ans<<endl;
   
}
    return 0;
}