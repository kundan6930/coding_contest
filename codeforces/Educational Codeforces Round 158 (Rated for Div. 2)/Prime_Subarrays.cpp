#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    ll a[n + 1];

    fill(a, a + n + 1, 1);

    a[0] = 0, a[1] = 0;

    for (ll i = 2; i * i <= n; i++)
    {
        if (a[i])
        {

            for (ll j = i * i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }
    vector<ll> pre(n + 1);
    pre[0] = 0;
    ll c = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i])
        {
            c += 1;
        }
        pre[i] = pre[i - 1] + c;
    }
    vector<ll> aa(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> aa[i];
    }
    ll c1 = 0;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (aa[i] == 1)
        {
            c1++;
        }
        else
        {
            ans += pre[c1];
            c1 = 0;
        }
    }
    ans += pre[c1];
    cout << ans << endl;
    return 0;
}