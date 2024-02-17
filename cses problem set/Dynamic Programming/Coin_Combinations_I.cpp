#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll n, x;
ll solve(vector<ll> &a, ll x, vector<ll> &dp)
{
    if (x == 0)
    {
        return 1;
    }
    if (x < 0)
    {
        return 0;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        c += solve(a, x - a[i], dp);
    }
    return dp[x] = c % mod;
}
int main()
{

    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> dp(x + 1, -1);
    cout << solve(a, x, dp) << endl;

    return 0;
}
