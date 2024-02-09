#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define ll long long
ll c = 1e9 + 7;
void solve()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    ll a[n];
    rep(i, n) cin >> a[i];
    map<ll, ll> mini, maxi;
    for (ll i = 0; i < n; i++)
    {
        if (mini[a[i]] == 0)
            mini[a[i]] = i + 1;
        else
        {
            mini[a[i]] = min(mini[a[i]], i + 1);
        }
        if (maxi[a[i]] == 0)
            maxi[a[i]] = i + 1;
        else
        {
            maxi[a[i]] = max(maxi[a[i]], i + 1);
        }
    }

    vector<ll> v;
    for (ll i = k; i > 0; i--)
    {
        if (mini[i] == 0)
            ;
        else if (i == k)
            ;
        else
        {
            if (mini[i + 1] != 0)
                maxi[i] = max(maxi[i], maxi[i + 1]);
            if (mini[i + 1] != 0)
                mini[i] = min(mini[i], mini[i + 1]);
        }

        if (mini[i] != 0)
            v.push_back(2 * (maxi[i] - mini[i] + 1));
        else
        {
            if (i != k)
                maxi[i] = maxi[i + 1];
            v.push_back(0);
            if (i != k)
                mini[i] = mini[i + 1];
        }
    }

    reverse(v.begin(), v.end());
    rep(i, v.size()) cout << v[i] << " ";
    cout << endl;
}

int main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}