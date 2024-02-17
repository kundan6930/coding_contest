#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mx=200005;
vector<ll>node(4*mx);
void build(ll ind,ll s,ll e, vector<ll>&a)
{
    if(s==e)
    {
        if(a[s]=='1')
        {
            ll k=(s+(ll)1)*(s+(ll)1);
           node[ind]=k;
        }
        return ;
    }
    ll m=(s+e)/2;
    build(2*ind,s,m,a);
    build(2*ind+1,m+1,e,a);
    node[ind] =node[2*ind]+node[2*ind+1];
}
void update(ll ind,ll s,ll e, vector<ll>&a,ll l,ll r)
{
    if(l>r)
    {
        // a[pos]=val;
        // node[ind]=a[pos];
        return ;
    }
    ll m=(s+e)/2;
    if(pos<=m)
    {
    update(2*ind,s,m,a,pos,val);
    }
    else
    {
       update(2*ind+1,m+1,e,a,pos,val);
    }
    node[ind] =node[2*ind]+node[2*ind+1];
}
ll query(ll ind,ll s,ll e, vector<ll>&a,ll l, ll r)
{
    if(s>=l && e<=r)
    {
       return node[ind] ;
    }
    if(s>r || e<l)
    {
        return 0;
    }
      ll m=(s+e)/2;
      ll left= query(2*ind,s,m,a,l,r);
      ll right=query(2*ind+1,m+1,e,a,l,r);
    //  cout<<left<<" "<<right<<" "<<ind<<" "<<m<<endl;
      return left+right;
}
int main (){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    build(1,0,n-1,a);
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
          update(1,0,n-1,a,l,r);
        }
        else
        {
            cout<<query(1,0,n-1,a,l,r-1)<<endl;
        }
    }

    return 0;
}