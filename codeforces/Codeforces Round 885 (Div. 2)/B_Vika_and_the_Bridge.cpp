#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 ll n,k;
bool solve(vector<ll>a,ll m)
{
   ll k1=m+1;
   ll i=m;
   map<int,int>mp;
   for(;i<n;i+=k1)
   {
      mp[a[i]]++;
   }
    i=0;
   while(i<n && a[i]==a[i+1])
   {
     i++;
   }
    k1=m+1;
    i=i+1;
   map<int,int>mp1;
   for(;i<n;i+=k1)
   {
      mp1[a[i]]++;
   }
   if((mp.size()<=2) || (mp1.size()<=1) )
   {
     return true;
   }
 return false;
}
int  main (){
ll t;
cin>>t;
while(t--)
{
   
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll s=0,e=n,ans;
    while(s<=e)
    {
          ll m=(s+e)/2;
        //  cout<<m<<" "<<solve(a,m)<<endl;
          if(solve(a,m))
          {
             ans=m;
             e=m-1;
          }
          else
          {
            s=m+1;
          }
    }
    cout<<ans<<endl;
}
    return 0;
}