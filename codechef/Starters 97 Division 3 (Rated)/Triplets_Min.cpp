#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n),b(q);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<q;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    vector<ll>pre;
    ll s=0;
    for(ll i=0;i<n;i++)
    { 
       if(n-i>=2)
       {
          ll p=n-i-1;
          ll k=(p*(p-1))/2;
          s+=k;
          pre.push_back(s);
        //  cout<<s<<" "<<k<<endl;
       }
    }
    for(int i=0;i<q;i++)
    {
        auto it=lower_bound(pre.begin(),pre.end(),b[i]);
        if(it!=pre.end())
        {
           ll pos=it-pre.begin();
           cout<<a[pos]<<endl;
        }
    }

}
    return 0;
}