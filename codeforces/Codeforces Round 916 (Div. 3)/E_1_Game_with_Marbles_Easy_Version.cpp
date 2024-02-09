#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        vector<pair<ll,ll>> pro_a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            pro_a[i]={a[i]+b[i]-1,i};
        }
        sort(pro_a.begin(),pro_a.end(),greater<pair<int,int>>());
        int tu = 0;
        for (int i = 0; i < n; i++)
        {
            int idx = pro_a[i].second;
            if (tu == 0)
            {
                a[idx] -= 1;
                b[idx] = 0;
                tu = 1;
            }
            else
            {
                a[idx] = 0;
                b[idx] -= 1;
                tu = 0;
            }
        }

        ll s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s1 += a[i];
            s2 += b[i];
        }
        cout << s1 - s2 << endl;
    }
    return 0;
}