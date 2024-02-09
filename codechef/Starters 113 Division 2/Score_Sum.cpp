#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=998244353;
long long solve3(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
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
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
   // ll k=solve3((ll)2,n-(ll)3,mod);
    
   // cout<<k<<" "<<kk<<endl;
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        ll kk=solve3((ll)2,n-(ll)2-i,mod);
             ll k2=solve3(abs(a[i+1]-a[0]),(ll)7,mod);
            ll k3=k2*kk;
              k3%=mod;
            ans+=k3;
            ans%=mod;
    }
    cout<<ans<<endl;
}
    return 0;
}