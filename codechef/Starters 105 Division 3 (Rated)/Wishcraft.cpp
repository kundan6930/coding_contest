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
        ll p, q;
        cin >> p >> q;
        //   n1=q+1,m1=p+1;
        vector<ll> a(n);
        multiset<ll> st;
        ll s1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        while (st.size() > 2 && p + q > 0)
        {
            ll f1 = 0, f2 = 0, f3 = 0, f4 = 0;
            auto it = st.begin();
            ll s1 = *it;
            it++;
            ll s2 = *it;
            auto it1 = st.end();
            it1--;
            ll e1 = *it1;
            it1--;
            ll e2 = *it1;
            //  cout<<s1<<" "<<s2<<" "<<e1<<" "<<e2<<endl;
            vector<pair<ll, ll>> aa;
            if (p > 0)
            {
                aa.push_back({e1 + e2 - s1, 0});
                aa.push_back({e1 - (s1 + s2), 1});
            }
            else
            {
                aa.push_back({LLONG_MIN, 0});
                aa.push_back({LLONG_MIN, 1});
            }
            if (q > 0)
            {
                aa.push_back({e1 - s1 - s2, 2});
                aa.push_back({e2 - (s1 - e1), 3});
            }
            else
            {
                aa.push_back({LLONG_MIN, 0});
                aa.push_back({LLONG_MIN, 1});
            }
            //  for(int i=0;i<4;i++)
            //  {
            //     cout<<aa[i].first<<" "<<aa[i].second<<endl;
            //  }
            sort(aa.begin(), aa.end());
            ll k1 = aa[3].first;
            ll pos = aa[3].second;
            // cout<<k1<<" "<<pos<<endl;
            if (pos == 0)
            {
                auto it2 = st.end();
                it2--;
                // cout<<*it2<<endl;
                st.erase(it2);
                it2 = st.end();
                it2--;
                //   cout<<*it2<<endl;
                st.erase(it2);
                st.insert(e1 + e2);
                p--;
            }
            else if (pos == 1)
            {
                st.erase(st.begin());
                st.erase(st.begin());
                st.insert(s1 + s2);
                p--;
            }
            else if (pos == 2)
            {

                it--;
                it1++;
                st.erase(it);
                st.erase(it1);
                st.insert(e1 - s1);
                q--;
            }
            else
            {
                it--;
                it1++;
                st.erase(it);
                st.erase(it1);
                st.insert(s1 - e1);
                q--;
            }
        }
        auto pos1 = st.end();
        pos1--;
        // cout<<*pos1<<" "<<*st.begin()<<endl;
        ll ans = *pos1 - (*st.begin());
        cout << ans << endl;
    }

    return 0;
}