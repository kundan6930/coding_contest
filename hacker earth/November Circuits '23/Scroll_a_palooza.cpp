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
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<ll,ll>mx,mn;
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        s+=a[i];
        ll k=abs(s);
        if(mx[k]==0)
        {
            mx[k]=(i+1);
            mn[k]=(i+1);
        }
        else
        {
            mx[k]=max(mx[k],i+1);
            mn[k]=min(mn[k],i+1);
        }
    }
    //  for(auto i:mx)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    // for(auto i:mn)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    auto it=mx.rbegin();
    ll prev1=it->first;
    ll prev2=it->second;
    it++;
    for(;it!=mx.rend();it++ )
    {
        
        it->second=max(prev2,it->second);
        prev1=it->first;
         prev2=it->second;
        // cout<<prev1<<" "<<prev2<<endl;
    }
    auto it1=mn.rbegin();
     prev1=it1->first;
     prev2=it1->second;
    it1++;
    for(;it1!=mn.rend();it1++ )
    {
         it1->second=min(prev2,it1->second);
         prev1=it1->first;
         prev2=it1->second;
       //  cout<<prev1<<" "<<prev2<<endl;
    }
    // for(auto i:mx)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    // for(auto i:mn)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
       ll w;
       cin>>w;
       auto l=mn.lower_bound(w);
       auto r=mx.lower_bound(w);
       if(l==mn.end())
       {
          cout<<"-1"<<endl;
       }
       else
       {
        ll l1=l->second;
         ll r1=r->second;
         cout<<l1<<" "<<r1<<endl;
       }
       
    }

}
    return 0;
}