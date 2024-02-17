#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans(n);
        ans[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                int k = m / a[i];
                k = k * a[i];
                ans[i] = k;
            }
            else
            {
                int k = m / a[i];
                int k2 = k * a[i];
                if (k2 != ans[i - 1])
                {
                    while (__gcd(k2, a[i - 1]) != a[i])
                    {
                        k2 -= a[i];
                    }
                    ans[i] = k2;
                }
                else
                {
                    k2 = k2 - a[i];
                    ans[i] = k2;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}