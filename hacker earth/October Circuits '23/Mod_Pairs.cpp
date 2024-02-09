#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n, p, k;
    cin >> n >> p >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        for(ll j=i+1;j<n;j++)
        {
              ll a1 = (((a[i] * a[i] )%p+ (a[j] * a[j] )%p)%p*((a[i]+a[j]) % p))%p;
              if(a1==k)
              {
                ans++;
              }
        }
    }

   // ll ans = solve(a, n, p, k);
    cout << ans << endl;
    return 0;
}