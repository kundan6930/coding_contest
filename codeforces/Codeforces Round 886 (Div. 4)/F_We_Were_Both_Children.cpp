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
    vector<ll>a(n);
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    vector<ll>b(n+1);
    for(auto i:m)
    {
    for(ll j=i.first;j<=n;j+=i.first)
    {
        b[j]+=i.second;
    }
    }
    ll maxi=0;
    for(ll i=0;i<b.size();i++)
    {
        maxi=max(maxi,b[i]);
    }
    cout<<maxi<<endl;
}
    return 0;
}