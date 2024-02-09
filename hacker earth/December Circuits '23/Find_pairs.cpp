#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]-i]>0)
        {
            ans+=(mp[a[i]-i]);
        }
        mp[a[i]-i]++;
    }
    cout<<2*ans<<endl;

    return 0;
}