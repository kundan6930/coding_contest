#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 ll n,k;
bool solve(ll m,vector<vector<ll>>a)
{
    ll s=0;
    for(int i=0;i<n;i++)
    {
       if(a[i][0]>=m)
       {
         s+=a[i][1];
       }
    }
    if(s<=k)
    {
        return true;
    }
    return false;
}
int main (){
 
  cin>>n>>k;
  vector<vector<ll>>a(n,vector<ll>(2));
  ll maxi=0;
  for(ll i=0;i<n;i++)
  {
    cin>>a[i][0];
    cin>>a[i][1];
    maxi=max(maxi,a[i][0]);
  }
  ll s=1,e=maxi+1,ans;
  while(s<=e)
  {
    ll m=(s+e)/2;
    if(solve(m,a))
    {
        ans=m;
        e=m-1;
    }
    else{
        s=m+1;
    }
  }
  cout<<ans<<endl;
    return 0;
}