#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(int n, int &m)
{
    if (n == m)
    {
        return true;
    }
    if (n < m || n % 3 != 0)
    {
        return false;
    }
    bool l = solve(n / 3, m);
    bool r = solve(2 * (n / 3), m);
    return (l || r);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (solve(n, m))
        {
            cout << "YES" << endl;
        }
        else
            {
                cout << "NO" << endl;
            }
    }
    return 0;
}