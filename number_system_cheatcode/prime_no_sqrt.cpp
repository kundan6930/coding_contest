#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}