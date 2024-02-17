#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll m1 = 1e6;
vector<ll> fact(m1 + 1);
ll solve1(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve()
{
    fact[0] = 1;
    ll k1 = 1;
    for (int i = 1; i <= m1; i++)
    {
        k1 *= i;
        k1 %= mod;
        fact[i] = solve1(k1, mod - 2, mod);
    }
}

int main()
{
    ll t;
    cin >> t;
    solve();
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> ans(n + 1);
        ll sum = 0;
        for (ll i = 0; i <= n; i++)
        {
            ll k2 = fact[i];
            ll k1 = fact[n - i];
            if (i % 2 == 0)
            {
                sum += k2;
                sum %= mod;
            }
            else
            {
                sum -= k2;
                if (sum < 0)
                {
                    sum += mod;
                    sum %= mod;
                }
                sum %= mod;
            }
            //   cout<<fact[i]<<" "<<k2<<endl;
            ll ans1 = sum * k1;
            //  cout<<ans1<<endl;
            ans1 %= mod;
            ans[n - i] = ans1;
        }
        for (ll i = 0; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}