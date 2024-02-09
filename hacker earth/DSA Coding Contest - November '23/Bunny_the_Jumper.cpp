#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll x, y, b, n;
ll solve(ll pos, ll prev, vector<ll> &a, vector<ll> &c, vector<vector<ll>> &dp)
{

    if (pos >= n)
    {
        if (prev == 0)
        {
            return 1e15;
        }
        return 0;
    }
    if (dp[pos][prev] != -1)
    {
        return dp[pos][prev];
    }
    if (prev == 0)
    {
        ll ans = 1e15;
        if (pos == 0 && pos + x - 1 < n)
        {
            ans = min(ans, solve(pos + x - 1, 1, a, c, dp));
        }
        if (pos + 1 < n)
        {
            ans = min(ans, solve(pos + 1, 0, a, c, dp) + b);
        }
        if (pos + x < n)
        {
            ans = min(ans, solve(pos + x, 1, a, c, dp) + b);
        }
        return dp[pos][prev] = ans;
    }
    else
    {
        if (a[pos] == 0)
        {
            return dp[pos][prev] = solve(pos + y, 1, a, c, dp) + c[pos];
        }
        else
        {
            return dp[pos][prev] = solve(pos + y, 1, a, c, dp);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        cin >> x >> y >> b;
        vector<ll> a(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<vector<ll>> dp(n + 1, vector<ll>(2, -1));
        ll ans = solve(0, 0, a, c, dp);
        if (ans == 1e15)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}