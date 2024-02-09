#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
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
    ll maxi=LLONG_MIN; 
  for(int i=0;i<n;i++)
  {
     ll mini=INT_MAX;
     ll s=0;
    for(int j=i;j<n;j++)
    {
      mini=min(mini,a[j]);
      s+=a[j];
    
      maxi=max(maxi,mini*s);
     //   cout<<maxi<<" "<<mini<<" "<<s<<" "<<i<<" "<<j<<endl;
    }
  }
    maxi%=mod;
    cout<<maxi<<endl;
    
}
    return 0;
}