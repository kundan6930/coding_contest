#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll solve(ll n, int f, vector<ll> a, ll pos, vector<vector<vector<ll>>> &dp)
{
    if(n<0)
    {
        return 0;
    }
    if (pos >= 4)
    {
        
        if (f >= 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        return 0;
    }
    if (dp[n][pos][f] != -1)
    {
        return dp[n][pos][f];
    }
    ll s = 0;
    // cout<<n<<" "<<pos<<endl;
    if (pos == 3)
    {
        s += solve(n - a[pos], f >= 1 ? 1 : f + 1, a, pos, dp);
        s %= mod;
        s += solve(n, f, a, pos + 1, dp);
        s %= mod;
    }
    else if (pos == 0)
    {
        s += solve(n - a[pos] - 1, f, a, pos, dp);
        s %= mod;
        s += solve(n, f, a, pos + 1, dp);
        s %= mod;
    }
    else
    {
        s += solve(n - a[pos], f, a, pos, dp);
        s %= mod;
        s += solve(n, f, a, pos + 1, dp);
        s %= mod;
    }
    return dp[n][pos][f] = s;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a({1, 2, 3, 4});
        vector<vector<vector<ll>>> dp(n + 5, vector<vector<ll>>(5, vector<ll>(2, -1)));
        cout << solve(n+3, 0, a, 0, dp) << endl;
    }
    return 0;
}