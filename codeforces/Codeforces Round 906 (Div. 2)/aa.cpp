#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll exp, ll base, ll mod)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp % 2 == 0)
    {
        ll y = solve(exp / 2, base, mod);
        return ((y % mod) * (y % mod)) % mod;
    }
    else
    {
        return ((base % mod) * solve(exp - 1, base, mod)) % mod;
    }
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < 64; i++)
    {
        ll k = (n >> i) & 1;
        if (k == 1)
        {
            a.push_back(i);
        }
    }
    int n1 = a.size();
    vector<ll> pre(n1 + 1);
    pre[0] = 0;
    for (int i = 1; i <= n1; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    ll q;
    cin >> q;
    while (q > 0)
    {
        ll l, r, m;
        cin >> l >> r >> m;
        ll k1 = pre[r] - pre[l - 1];
        // cout<<k1<<endl;
        cout << solve(k1, 2, m) << endl;
        q--;
    }

    return 0;
}