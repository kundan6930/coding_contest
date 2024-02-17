#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod=5*1e6+1;
void solve(ll k, vector<ll>&a)
{
    while (k > (ll)0)
    {
        ll k1 = k % (ll)10;
        a[k1]++;
        k /= (ll)10;
    }
}
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a(10);
    for(ll i=0;i<n;i++)
    {
        a[s[i]-'0']++;
    }
   // cout<<k2<<endl;
    ll ans = 0;
    for (ll i = 0; i <= mod; i++)
    {
        ll k = i * i;
        vector<ll> b(10);
        solve(k, b);
        ll f = 0;
        if(a[0]<b[0])
        {
            f=1;
        }
        for (ll j = 1; j< 10; j++)
        {
            if (a[j] != b[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
         //   cout<<k<<endl;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}