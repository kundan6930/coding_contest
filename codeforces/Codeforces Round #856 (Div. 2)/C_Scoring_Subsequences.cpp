#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(ll pos,vector<ll>&a)
{
  ll s=0,e=pos,max_len;
  while(s<=e)
  {
    ll m=(s+e)/2;
    if(a[m]>=(pos-m+1))
    {
      max_len=m;
      e=m-1;

    }
    else
    {
         s=m+1;
    }
  }
  return pos-max_len+1;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll n;
     cin>>n;
     vector<ll>a(n);
     for(ll i=0;i<n;i++)
     {
      cin>>a[i];
     }
     for(ll i=0;i<n;i++)
     {
       
       cout<<solve(i,a)<<" ";
     }
     cout<<endl;
    }
    
    return 0;
    }