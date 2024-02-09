#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(ll n)
{
    ll p1;
  if(n%2==0)
{
   p1=n/2;
    p1=(n+1)*p1;
}
else{
     p1=(n+1)/2;
    p1=p1*n;
}
return p1;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
  ll n,x,y;
  cin>>n>>x>>y;
  ll k=n/x;
  ll k1=n/y;
  ll g=__gcd(x,y);
  ll l=(x*y)/g;
  ll k2=(n/l);
  k-=k2;
  k1-=k2;
//   ll t1=max(k,k1);
//   ll t2=min(k,k1);
 ll p1=solve(n);
 ll p2=solve(n-k);
 ll p3=solve(k1);
 //cout<<p1<<" "<<p2<<" "<<p3<<endl;
 ll ans=0;
 ans=(p1-p2);
 ans-=p3;
 cout<<ans<<endl;

}
    return 0;
}