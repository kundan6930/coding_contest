
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 998244353;
void solve(string s, string t, int n, int k)
{
    vector<int> s1(26, 0);
    vector<int> t1(26, 0);
    for (int i = 0; i < n; i++)
    {
        s1[s[i] - 'a']++;
        t1[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (s1[i] != t1[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i - k < 0 && i + k >= n && s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, st;
        cin >> s;
        cin >> st;
        solve(s, st, n, k);
    }
    return 0;
}