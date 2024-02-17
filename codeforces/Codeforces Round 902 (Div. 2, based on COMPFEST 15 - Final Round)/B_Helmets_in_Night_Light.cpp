#include <bits/stdc++.h>
using namespace std;
// bool cmp(pair<int,int>a,pair<int,int>b)
// {
//     if(a.first==b.first)
//     {
//         return (a.second>b.second);
//     }
//      return (a.first<b.first);
// }
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,p;
    cin>>n>>p;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<ll,ll>>c(n);
    for(int i=0;i<n;i++)
    {
        c[i]={b[i],a[i]};
    }
    sort(c.begin(),c.end());
    // for(int i=0;i<n;i++)
    // {
    //   cout<<c[i].first<<" "<<c[i].second<<endl;
    // }
    ll ct=0,i=0;
    ll ans=0;
    while(ct<n-1 && i<n && (c[i].first)<p)
    {
         if(c[i].second<(n-ct-1)) 
         {
              ans+=((c[i].first)*(c[i].second));
              ct+=(c[i].second);
         }
         else
         {
               ans+=(c[i].first)*(n-ct-1);
               ct=n-1;
         }
       i++;
    }
    ans+=(n-ct)*p;
    cout<<ans<<endl;
}

    return 0;
}