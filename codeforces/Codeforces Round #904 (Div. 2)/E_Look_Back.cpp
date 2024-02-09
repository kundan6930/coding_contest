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
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll ans=0;
    ll p=a[0];
    for(ll i=1;i<n;i++)
    {
        int c=0;
       while(a[i]<p)
       {
         a[i]=a[i]*2;
         c++;
       }
       ans+=c;
       p=a[i];
    }
    cout<<ans<<endl;
}
    return 0;
}