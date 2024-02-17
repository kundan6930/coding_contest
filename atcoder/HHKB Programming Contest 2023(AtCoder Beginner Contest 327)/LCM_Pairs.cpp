#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    vector<int> mp(maxi + 1);
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    ll ans = (ll)0;
    for (int i = 1; i <= maxi; i++)
    {
        if (mp[i] > 0)
        {
            ll c = 0;
            for (int j = i * 2; j <= maxi; j += i)
            {
                if (mp[j] > 0)
                {
                    c += (ll)mp[j];
                }

                //   cout<<j<<" "<<mp[j]<<" "<<ans<<" "<<i<<endl;
            }
            ans += ((ll)mp[i] * c);
            ans += ((ll)mp[i] * (mp[i] - (ll)1)) / (ll)2;
            // cout<<ans<<" "<<c<<" "<<mp[i]<<endl;
        }
    }
    cout << ans << endl;
    return 0;
}