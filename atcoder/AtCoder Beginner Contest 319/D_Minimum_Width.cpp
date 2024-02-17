#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(ll m, vector<ll> a, ll m1)
{

    ll s = 0;
    s += a[0];
    ll c1 = 0, c = 0;
    ll p1 = m;
    int n = a.size();
    ll f = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > m)
        {
            return false;
        }
        if (c1 == 0)
        {
            p1 -= a[i];
            if (p1 <= 0)
            {
                c1 = 0;
                c++;
            }
            else
            {
                c1++;
            }
            if (p1 < 0)
            {
                i--;
                p1 = m;
            }
            if (p1 == 0)
            {
                p1 = m;
                f = 1;
            }
        }
        else
        {
            p1 -= (a[i] + (ll)1);
            if (p1 <= 0)
            {
                c1 = 0;
                c++;
            }
            else
            {
                c1++;
            }
            if (p1 < 0)
            {
                i--;
                p1 = m;
            }
            if (p1 == 0)
            {
                p1 = m;
                f = 1;
            }
        }
        //    cout<<p1<<" "<<i<<" "<<c1<<" "<<c<<endl;
    }
    if (p1 != m)
    {
        c++;
    }
    // cout<<p1<<" "<<c1<<" "<<c<<" "<<m1<<endl;
    if (c <= m1)
    {
        //  cout<<"hi"<<" "<<m<<endl;
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m1;
    cin >> n >> m1;
    vector<ll> a(n);
    ll s1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s1 += a[i];
    }
    ll s = 1, e = s1 + n, ans = -1;
    while (s <= e)
    {
        ll m = (s + e) / 2;
        //    cout<<solve(m,a,m1)<<" "<<m<<endl;
        if (solve(m, a, m1))
        {
            ans = m;
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    cout << ans << endl;

    return 0;
}