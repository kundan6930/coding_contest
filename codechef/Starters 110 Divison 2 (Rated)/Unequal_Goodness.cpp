#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(vector<ll>a,ll m)
{
    fo
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll s = 0;
        ll maxi = LLONG_MIN;
        int i = 0, j = 0;
        while (j < n)
        {
            s += a[j];
            if (a[i] != a[j])
            {
                maxi = max(maxi, s);
            }
            if (s < 0)
            {
                s = 0;
                i = j;
            }
            j++;
        }
        cout << maxi << endl;
    }
    return 0;
}