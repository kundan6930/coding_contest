#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll mini=min(k,n/2);
   // cout<<mini<<endl;
    ll ans=0;
    ans+=(mini*(n-1));
    ll k1=n-(2*mini);
    ans+=(k1*mini);
    cout<<ans<<endl;


}
    return 0;
}