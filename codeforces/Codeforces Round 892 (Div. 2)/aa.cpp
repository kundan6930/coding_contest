#include <bits/stdc++.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <list>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> first;
        vector<ll> second;
        for (ll i = 0; i < n; i++)
        {
            priority_queue<ll> pq;
            ll k1;
            cin >> k1;
            for (ll j = 0; j < k1; j++)
            {
                ll a;
                cin >> a;
                if (pq.size() < 2)
                {
                    pq.push(a);
                }
                else if (pq.top() > a)
                {
                    pq.pop();
                    pq.push(a);
                }
            }
           second.push_back(pq.top());
           // cout<<pq.top()<<" "<<"1"<<endl;
            pq.pop();
            first.push_back(pq.top());
           //   cout<<pq.top()<<" "<<"2"<<endl;
            pq.pop();
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        ll sum = first[0] + accumulate(second.begin() + 1, second.end(), 0);
        cout << sum << endl;
    }
    return 0;
}