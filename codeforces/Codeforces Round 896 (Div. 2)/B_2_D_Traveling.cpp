#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<ll, ll>>ab(n + 1);
        ll mini1 = 1e15;
        ll mini2 = 1e15;

        for (int i = 1; i <= n; i++)
        {
            cin >> ab[i].first;
            cin >> ab[i].second;
            // cout<<ab[i].first<<" "<<endl;
        }
        ll ans = abs(ab[a].first - ab[b].first) + abs(ab[a].second - ab[b].second);
        for (int i = 1; i <= k; i++)
        {
            mini1 = min(mini1, abs(ab[a].first - ab[i].first) + abs(ab[a].second - ab[i].second));
            mini2 = min(mini2, abs(ab[b].first - ab[i].first) + abs(ab[b].second - ab[i].second));
        }
        
            ans = min(ans, mini1 + mini2);
            cout << ans << endl;
    }
return 0;
}