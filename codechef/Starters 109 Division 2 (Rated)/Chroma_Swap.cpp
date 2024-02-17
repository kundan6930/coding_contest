#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), ca(n), b(n), cb(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> ca[i];
            mp1[ca[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> cb[i];
            mp2[cb[i]]++;
        }
        map<int, multiset<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[cb[i]].insert(b[i]);
            mp[ca[i]].insert(a[i]);
        }
        int f = 0;
        int prev = a[0];
        // cout<<prev<<endl;
        if (mp[ca[0]].size() > 0)
        {
            // multiset<int>tp1=mp[ca[0]];
            if (mp1[ca[0]] > 0 && mp2[ca[0]] > 0)
            {
                prev = min(prev, *mp[ca[0]].begin());
            }
            auto it1 = mp[ca[0]].find(prev);
            if (it1 != mp[ca[0]].end())
            {
                mp[ca[0]].erase(it1);
            }
            if (mp[ca[0]].empty())
            {
                mp.erase(ca[0]);
            }
        }
        //  cout<<prev<<endl;
        for (int i = 1; i < n; i++)
        {
            //  multiset<int>tp=mp[ca[i]];
            int n2 = mp[ca[i]].size();
            auto it = mp[ca[i]].lower_bound(prev);
            if (it == mp[ca[i]].end())
            {
                if (prev >= a[i])
                {
                    f = 1;
                    break;
                }
                else
                {
                    prev = a[i];
                    auto it1 = mp[ca[i]].find(prev);
                    if (it1 != mp[ca[i]].end())
                    {
                        mp[ca[i]].erase(it1);
                    }
                    if (mp[ca[i]].empty())
                    {
                        mp.erase(ca[i]);
                    }
                }
            }
            else
            {
                if (a[i] >= prev)
                {
                    if (mp1[ca[i]] > 0 && mp2[ca[i]] > 0)
                    {
                        if (*it < a[i])
                        {
                            prev = *it;
                        }
                        else
                        {
                            auto it2 = mp[ca[i]].find(a[i]);
                            if (it2 != mp[ca[i]].end())
                            {
                                prev = a[i];
                            }
                            else
                            {
                                prev = *it;
                            }
                        }
                    }
                    else
                    {
                        auto it2 = mp[ca[i]].find(a[i]);
                        if (it2 == mp[ca[i]].end())
                        {
                            f = 1;
                            break;
                        }
                        prev = a[i];
                    }
                }
                else
                {
                    if (mp1[ca[i]] > 0 && mp2[ca[i]] > 0)
                    {
                        prev = *it;
                    }
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                auto it1 = mp[ca[i]].find(prev);
                if (it1 != mp[ca[i]].end())
                {
                    mp[ca[i]].erase(it1);
                }
                if (mp[ca[i]].empty())
                {
                    mp.erase(ca[i]);
                }
            }
            // cout<<prev<<endl;
        }
        if (f == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}