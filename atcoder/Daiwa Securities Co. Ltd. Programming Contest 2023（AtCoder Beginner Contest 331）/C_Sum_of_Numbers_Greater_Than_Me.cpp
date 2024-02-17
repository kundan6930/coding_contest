#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp,mp1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll s=0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
       mp1[it->first]=s;
       s+=(it->first*it->second);
    }
    for(int i=0;i<n;i++)
    {
        cout<<mp1[a[i]]<<" ";
    }
    cout<<endl;
    return 0;
}