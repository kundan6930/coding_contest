#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll m=1e9+7;
int main (){
ll t;
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
    sort(a.begin(),a.end(),greater<ll>());
    multiset<ll>s;
    s.insert(a[0]%m);
    for(ll i=1;i<n;i++)
    {
        if(!s.empty())
        {
        auto it=lower_bound(s.begin(),s.end(),a[i]);
        if(it==s.end())
        {
            s.insert(a[i]%m);
        }
        else
        {
           ll k=*it;
           s.erase(it);
           k=k^a[i];
           k%=m;
           s.insert(k);
        } 
        } 
    }
    cout<<s.size()<<endl;
}
    return 0;
}