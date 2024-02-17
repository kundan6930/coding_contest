#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>a(n);
    vector<ll>pre0(n+1),pre1(n+1);
    pre0[0]=0;
    pre1[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            pre0[i+1]=pre0[i]+1;
            pre1[i+1]=pre1[i];
        }
        else
        {
           pre0[i+1]=pre0[i];
           pre1[i+1]=pre1[i]+1;
        }
    }
    // for(int i=0;i<=n;i++)
    // {
    //    cout<<pre0[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=n;i++)
    // {
    //    cout<<pre1[i]<<" ";
    // }
    // cout<<endl;
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
       // cout<<a[i]<<endl;
        auto it=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
        auto it1=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
        ll l1=n;
        ll r1=n;
        if(it!=a.end())
        {
              l1=it-a.begin();
        }
        if(it1!=a.end())
        {
               r1=it1-a.begin();
        }
       if(a[i]%2==0)
       {
         ans+=(pre1[r1]-pre1[l1]);
       }
       else
       {
          ans+=(pre0[r1]-pre0[l1]);
       }
      // cout<<l1<<" "<<r1<<" "<<a[i]<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}