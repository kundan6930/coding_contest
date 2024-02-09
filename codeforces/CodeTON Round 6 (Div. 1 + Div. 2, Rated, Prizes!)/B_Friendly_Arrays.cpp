#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, x = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int c[32] = {0};
    for (int &ai : a)
    {
        cin >> ai;
        x = x ^ ai;
        for (int j = 0; j < 31; j++)
        {
            if ((1 << j) & ai)
            {
                c[j]++;
            }
        }
    }

    for (int &bi : b)
    {
        cin >> bi;
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < 31; i++)
        {
            if (c[i] % 2 == 1)
            {
                for (int bj : b)
                {
                    if ((1 << i) & bj)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            a[k] = a[k] | bj;
                        }
                        break;
                    }
                }
            }
        }
        int y = 0;
        for (int ai : a)
        {
            y = y ^ ai;
        }
        cout << y << ' ' << x << endl;
    }
    else
    {
        for (int i = 0; i < 31; i++)
        {
            if (c[i] % 2 == 0)
            {
                for (int bj : b)
                {
                    if ((1 << i) & bj)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            a[k] = a[k] | bj;
                        }
                        break;
                    }
                }
            }
        }
        int y = 0;
        for (int ai : a)
        {
            y = y ^ ai;
        }
        cout << x << ' ' << y << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}