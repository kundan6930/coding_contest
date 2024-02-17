#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,q;
    cin>>n>>q;
    vector<ll>a(n),c(n+2);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
   
    for(int i=0;i<q;i++)
    { 
        int l,r;
        cin>>l>>r;
        c[l]++;
        c[r+1]--;
    }
    vector<pair<ll,ll>>p(n);
    for(int i=1;i<=n;i++)
    {
        c[i]=c[i-1]+c[i];
        p[i-1]={c[i],i-1};
       // cout<<c[i]<<endl;
    }
    sort(p.begin(),p.end(),greater<pair<int,int>>());
    sort(a.begin(),a.end(),greater<int>());
    ll s=0;int i=0;
    vector<int>ans(n);
    while(i<n)
    {
       s+=(a[i]*(p[i].first));
       ans[p[i].second]=a[i];
       i++;
    }
   cout<<s<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<ans[i]<<" ";
   }
   cout<<endl;

}
    return 0;
}