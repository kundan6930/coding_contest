#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(int n, vector<int> &a)
{

    for (int i = 0; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i <= n; i += 2)
    {
        a[i] = 2;
    }
    for (int i = 3; i * i <= n; i++)
    {
        if (a[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (a[j] == j)
                {
                    a[j] = i;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    vector<int> pr(1e7 + 1);
        solve(1e7, pr);
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<map<int, int>, int> m;
        for (int i = 0; i < n; i++)
        {
            int k = a[i];
            map<int, int> mp;
            while (k != 1)
            {
                int c = pr[k];
                mp[c]++;
                if ((mp[c]) % 2 == 0)
                {
                    mp.erase(c);
                }
                k /= c;
            }
            if (!mp.empty())
            {
                m[mp]++;
            }
        }
        int maxi = 0;
        for (auto i : m)
        {
            if (i.second > maxi)

            {
                maxi = i.second;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}