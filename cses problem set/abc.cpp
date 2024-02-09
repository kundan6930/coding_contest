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
   ll  n,m;
   cin>>n>>m;
   ll ans=m;
   for(ll i=1;i<n;i++)
   {
      ans*=(m-(ll)1);
      ans%=mod;
   }
   cout<<ans<<endl;
}
    return 0;
}