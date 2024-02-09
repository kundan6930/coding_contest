#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod = 1000000007;
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
 {
    return (a / gcd(a, b)) * b;
}

int main() {
     ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll x, y;
        cin >> x >> y;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll k=1;
            for(ll j=i;j<n;j++)
            {
                  k=lcm(k,a[j]);
                  if(k>y)
                  {
                    break;
                  }
                  if(k>=x && k<=y)
                  {
                    ans++;
                  }
            }
            if(k<x)
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
