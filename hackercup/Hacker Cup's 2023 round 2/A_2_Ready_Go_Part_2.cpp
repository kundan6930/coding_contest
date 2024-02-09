#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m;
ll mod = -(1e9 + 7);
bool valid(int i, int j, vector<vector<char>> &grid)
{
    if (i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || grid[i][j] == 'B' || grid[i][j] == '.')
    {
        return 0;
    }
    return 1;
}
void solve(ll r, ll c, vector<vector<char>> &a, ll &c2)
{
    if (r < 0 || r >= n || c < 0 || c >= m || a[r][c] == 'B')
    {
        return;
    }
    if (a[r][c] == '.')
    {
        c2 += mod;
        return;
    }
    if (a[r][c] == 'W')
    {
        c2 += 1;
    }
    a[r][c] == 'B';
    solve(r + 1, c, a, c2);
    solve(r, c + 1, a, c2);
    solve(r - 1, c, a, c2);
    solve(r, c - 1, a, c2);
    return;
}
int main()
{
    ll t;
    cin >> t;
    ll t1 = t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
       // vector<vector<char>> vis(n, vector<char>(m));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0, maxi = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                ll c2 = 0;
                if (a[i][j] == '.')
                {
                    a[i][j] = 'B';
                    ll a1 = 0;
                    ll b1 = 0;
                    ll c1 = 0;
                    ll d1 = 0;
                    if (valid(i + 1, j, a))
                    {
                        c2 = 0;
                        solve(i + 1, j, a, c2);
                        a1 = c2;
                    }
                    if (valid(i - 1, j, a))
                    {
                        c2 = 0;
                        solve(i - 1, j, a, c2);
                        b1 = c2;
                    }
                    if (valid(i, j + 1, a))
                    {
                        c2 = 0;
                        solve(i, j + 1, a, c2);
                        c1 = c2;
                    }
                    if (valid(i, j - 1, a))
                    {
                        c2 = 0;
                        solve(i, j - 1, a, c2);
                        d1 = c2;
                    }
                    cout<<i<<" "<<j<<" "<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<endl;
                    ll temp = a1 + b1 + c1 + d1;
                    a[i][j]='.';
                   // solve(i, j, a, c2);
                    maxi = max(maxi, temp);
                }
            }
        }
        cout << "Case #" << t1 - t << ": ";
        cout << maxi << endl;
    }
    return 0;
}