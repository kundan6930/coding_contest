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
    ll k=n-2;
    ll s=k*(k+1);
    ll ans=s+4*n+n;
    cout<<ans<<endl;
}
    return 0;
}