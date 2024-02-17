#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll n1 = 1e6 + 2;
void solve(vector<ll> &fac)
{
    fac[0] = 1;
    for (ll i = 1; i <= n1; i++)
    {
        fac[i] = fac[i - 1] * i;
        fac[i] %= mod;
    }
}
ll solve3(ll exp, ll base)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp % 2 == 0)
    {
        ll y = solve3(exp / 2, base);
        return ((y % mod) * (y % mod)) % mod;
    }
    else
    {
        return ((base % mod) * solve3(exp - 1, base)) % mod;
    }
}
ll solve4(ll n, ll r, vector<ll> &fac)
{
    if (n < r)
    {
        return 0;
    }
    ll k1 = fac[n];
    ll k2 = fac[n - r];
    ll k3 = fac[r];
    ll k4 = solve3(mod - 2, k3);
    ll k5 = solve3(mod - 2, k2);
    ll ans = (((k4 * k5) % mod) * k1) % mod;
    return ans % mod;
}

ll solve1(ll n, vector<ll> &a, vector<ll> &fac)
{

    vector<ll> b;
    if (a[0] != 0)
    {
        b.push_back(0);
    }
    else
    {
        b.push_back(-1);
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            b.push_back(i);
        }
    }
    ll ans = 1;
    for (ll i = 1; i < (ll)b.size(); i++)
    {
        ll a1 = b[i - 1];
        ll b1 = b[i];
        ll l;
        if (a1 == -1)
        {
            l = 0;
        }
        else
        {
            l = a[a1];
        }
        ll r = a[b1];

        ll k = solve4(r - l - (ll)1, b1 - a1 - (ll)1, fac);
        k %= mod;
        ans *= k;
        ans %= mod;
    }
    if (ans != 0 && a[n - 1] == 0)
    {
        return -1;
    }
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    vector<ll> fac(n1 + 1);
    solve(fac);
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << solve1(n, a, fac) << endl;
    }
    return 0;
}