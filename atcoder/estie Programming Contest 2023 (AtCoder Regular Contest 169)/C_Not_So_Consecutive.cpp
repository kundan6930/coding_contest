#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
ll modInverse(ll n, ll p)
{
    return power(n, p - 2, p);
}
ll mul(ll x,
                       ll y, ll p)
{
    return x * 1ull * y % p;
}
ll divide(ll x,
                          ll y, ll p)
{
    return mul(x, modInverse(y, p), p);
}
// Returns nCr % p using Fermat's little
// theorem.
ll nCrModPFermat(ll n,
                                 ll r, ll p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
    // if n-r is less calculate nCn-r
    if (n - r < r)
        return nCrModPFermat(n, n - r, p);
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    ll res = 1;
    // keep multiplying numerator terms and dividing denominator terms in res
    for (ll i = r; i >= 1; i--)
        res = divide(mul(res, n - i + 1, p), i, p);
    return res;
}
int main (){
ll n;
cin>>n;
vector<ll>a(n);
map<ll,ll>mp;
ll c=0;
for(ll i=0;i<n;i++)
{
  cin>>a[i];
  if(a[i]!=-1)
  {
    mp[a[i]]++;
  }
  else
  {
    c++;
  }
}
ll f=0;
ll k=0;
for(int i=1;i<=n;i++)
{
    if(mp[i]>i)
    {
        f=1;
        break;
    }
    k+=(i-mp[i]);
    cout<<k<<endl;
}
cout<<f<<" "<<k<<" "<<c<<endl;
if(f==1)
{
    cout<<"0"<<endl;
}
else{
    ll p=998244353;
    cout<<nCrModPFermat(k, c, p)<<endl;
}

    return 0;
}