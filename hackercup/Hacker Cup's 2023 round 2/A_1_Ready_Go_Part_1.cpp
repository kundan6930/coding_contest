#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m;
void solve(int r, int c, vector<vector<char>> &a, vector<vector<int>> &vis, ll &ct)
{
    if (r < 0 || r >= n || c < 0 || c >= m || a[r][c] == 'B')
    {
        return;
    }
    else if (a[r][c] == '.')
    {
        if (!vis[r][c])
        {
            ct++;
            vis[r][c] = 1;
        }
        return;
    }
    a[r][c] = 'B';
    solve(r + 1, c, a, vis, ct);
    solve(r, c + 1, a, vis, ct);
    solve(r - 1, c, a, vis, ct);
    solve(r, c - 1, a, vis, ct);
}
bool solve1(vector<vector<char>> a)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll ct = 0;
            if (a[i][j] == 'W')
            {
                vector<vector<int>> vis(n, vector<int>(m, 0));
                solve(i, j, a, vis, ct);
                // cout<<ct<<endl;
                if (ct <= 1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    int t1 = t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (solve1(a))
        {
            cout << "Case #" << t1 - t << ": ";
            cout << "YES" << endl;
        }
        else
        {
            cout << "Case #" << t1 - t << ": ";
            cout << "NO" << endl;
        }
    }
    return 0;
}