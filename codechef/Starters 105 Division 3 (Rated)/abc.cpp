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
    vector<ll>a(n),pre(n+1);
     map<ll,vector<ll>>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i+1);
    }
    pre[0]=0;
    for(ll i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i-1];
      //  cout<<pre[i]<<endl;
    }
    ll mini=LLONG_MAX;
        for(auto i :mp)
        {
            vector<ll>aa=i.second;
            for(ll j=0;j<aa.size()-1;j++)
            {
                ll k=pre[aa[j+1]]-pre[aa[j]-1];
               // cout<<aa[j]<<" "<<aa[j+1]<<" "<<k<<endl;
                 mini=min(mini,k);
            }
        }
        if(mini==LLONG_MAX)
        {
            cout<<"-1"<<endl;
        }
        else{
        cout<<mini<<endl;
        }
}
    return 0;
}