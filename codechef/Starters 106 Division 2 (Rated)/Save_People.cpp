#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
   ll n,m,x,y;
    cin>>n>>m>>x>>y;
   ll k1=(m-y)*n;
   ll k2=(y-1)*n;
   ll k3=(n-x)*m;
   ll k4=(x-1)*m;
   ll ans=max({k1,k2,k3,k4});
   cout<<ans<<endl;
}
    return 0;
}