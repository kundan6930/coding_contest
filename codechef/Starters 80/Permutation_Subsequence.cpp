#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll n;
      cin>>n;
      vector<ll>a(n);
      
      ll maxi=0;
      for(ll i=0;i<n;i++)
      {
        cin>>a[i];
        maxi=max(maxi,a[i]);
       
      }
    //  cout<<maxi<<endl;
      vector<ll>f(maxi+1,0);
      for(ll i=0;i<n;i++)
      {
         f[a[i]]++;
        // cout<<f[a[i]]<<" ";
      }
     // cout<<endl;
      ll p=1;
      ll s=0;
      for(ll i=1;i<=maxi;i++)
      {
         if(f[i]==0)
         {
            break;
         }
         else
         {
           p*=f[i];
           s+=p;
           s=s%mod;
         }
      }
      cout<<s<<endl;


    }
    return 0;
}