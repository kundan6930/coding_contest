#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
   ll l=a[0];
   ll r=a[1];
   sort(a.begin()+2,a.end());
   ll c=0;ll ans=0;
ll mini=LLONG_MAX;
    for(ll i=m+1;i<n;i++)
    {
      mini=min(mini,max((ll)0,l-a[i-m+(ll)1])+max((ll)0,a[i]-r)) ;
    }
    cout<<ans+mini<<endl;
   

    return 0;
}