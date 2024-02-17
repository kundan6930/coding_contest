#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t, s;
    cin >> t >> s;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        if (s == 0)
        {

            int k = n / 2;
            if (n % 2 != 0)
            {
                k++;
                for (int i = 0; i < k; i++)
                {
                    ans += a[i];
                }
            }
            else
            {
                for (int i = 1; i < k + 1; i++)
                {
                    ans += a[i];
                }
            }

            cout << ans << endl;
        }
        else
        {
            vector<ll> pre(n + 1, 0);
            for (int i = 0; i < n; i++)
            {
                pre[i + 1] = pre[i] + a[i];
            }
            ll ans = 0;
            int k = n / 2;
            if (n % 2 != 0)
            {
                k++;
            }
            int i = 1;
            while (i <= k)
            {
                ll s1 = pre[n - i+1] - pre[(n - (i + i)) +1];
              //  cout << s1 << endl;
                ans = max(s1, ans);
                i++;
            }

            cout << ans << endl;
        }
    }
    return 0;
}