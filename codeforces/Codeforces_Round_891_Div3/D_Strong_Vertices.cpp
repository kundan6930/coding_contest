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
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
       // cout<<a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll maxi=LLONG_MIN;
    for(ll i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]-b[i]);
    }
   // cout<<maxi<<endl;
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
       ll k=a[i]-b[i];
       if(k==maxi)
       {
          ans.push_back(i+1);
       }
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}