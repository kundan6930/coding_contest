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
   ll a[n];
   for(ll i=0;i<n;i++)
   {
    cin>>a[i];
   } 
   map<ll,ll>m;
   ll c=0;
   for(ll i=0;i<n;i++)
   {
      if(m[a[i]]>0)
      {
        c+=m[a[i]];
      }
      m[a[i]]++;
   }
   //cout<<c<<endl;
   ll k=((n)*(n-1))/2;
   cout<<k-c<<endl;
}
    return 0;
}