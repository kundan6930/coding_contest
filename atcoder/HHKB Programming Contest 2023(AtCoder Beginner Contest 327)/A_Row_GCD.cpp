#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
  ll n,m;
  cin>>n>>m;
  vector<ll>a(n),b(m);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>b[i];
  }
  ll s=(ll)0;
  for(ll i=1;i<n;i++)
  {
     s=__gcd(s,abs(a[i]-a[0]));
  }
  vector<ll>ans;
  for(int i=0;i<m;i++)
  {
     ans.push_back(__gcd(a[0]+b[i],s));
  }
  for(int i=0;i<(int)ans.size();i++)
  {
      cout<<ans[i]<<" ";
  }
  cout<<endl;
    return 0;
}