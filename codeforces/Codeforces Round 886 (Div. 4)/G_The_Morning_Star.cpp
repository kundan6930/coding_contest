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
    ll a[n][2];
    map<int,int>m,m1,mp1,mp2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        m[a[i][0]]++;
        m1[a[i][1]]++;
        mp1[a[i][0]-a[i][1]]++;
        mp2[a[i][0]+a[i][1]]++;
    }
    ll ans=0;
    for(auto i: mp1)
    {
        ll k=i.second;
        ans+=((k*(k-1)));
    }
    for(auto i: mp2)
    {
        ll k=i.second;
        ans+=((k*(k-1)));
    }
    for(auto i: m)
    {
        ll k=i.second;
        ans+=((k*(k-1)));
    }
    for(auto i: m1)
    {
        ll k=i.second;
        ans+=((k*(k-1)));
    }
    cout<<ans<<endl;
}
    return 0;
}