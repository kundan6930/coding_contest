#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    ll n,m;
    cin>>n>>m;
    vector<ll>p(n),l(m),d(m);
    multiset<ll>s;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        s.insert(p[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>l[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>d[i];
    }
    vector<pair<ll,ll>>a(m);
    for(int i=0;i<m;i++)
    {
        a[i]={d[i],l[i]};
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        if(s.empty())
        {
            break;
        }
        auto it=s.lower_bound(a[i].second);
        if(it!=s.end())
        {
           ans+=(*it-a[i].first);
           s.erase(it);
          // cout<<ans<<" "<<*it<<" "<<i<<endl;
        }
    }
    for(auto it=s.begin();it!=s.end();++it)
    {
       ans+=(*it);
    }
 cout<<ans<<endl;

    return 0;
}