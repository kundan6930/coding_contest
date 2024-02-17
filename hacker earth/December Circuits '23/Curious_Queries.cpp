#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n1=1e5+1;
vector<ll>t(4*(n1+2),0);
void build(vector<ll>&a, ll v, ll tl, ll tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        ll tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}
void update(ll v, ll tl, ll tr, ll pos, ll new_val) 
{
    if (tl == tr) {
        t[v]+= new_val;
    } else {
        ll tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}
ll sum(ll v, ll tl, ll tr, ll l, ll r) 
{
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    ll tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n),b(n1-1,0);
    vector<pair<pair<ll,ll>,ll>>qr(q);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(ll i=0;i<q;i++)
    {
        ll l,r;
       cin>> l;
       cin>> r;
       qr[i]={{l,r},i};
    }
    sort(qr.begin(),qr.end());
    build(b,1,0,n1-2);
    ll s1=0;
   // cout<<s1<<endl;
   vector<ll>ans(q);
    for(int i=0;i<q;i++)
    {
       pair<ll,ll>p2=qr[i].first;
        ll l=p2.first;
        ll r=p2.second;
       ll idx=qr[i].second;
     //    cout<<l<<" "<<r<<" "<<s1<<endl;
        for(int j=s1;j<=l;j++)
        {
            update(1,0,n1-2,a[j],a[j]);
        }
        s1=l+1;
        if(a[r]+1<100000)
        {
         ans[idx]=sum(1,0,n1-2,a[r]+1,n1-2);
        }
        else{
            ans[idx]=0;
        }
    }
    for(int i=0;i<q;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}