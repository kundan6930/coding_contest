#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll c = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            c++;
        }  
    }
     cout << c << endl;
    return 0;
}