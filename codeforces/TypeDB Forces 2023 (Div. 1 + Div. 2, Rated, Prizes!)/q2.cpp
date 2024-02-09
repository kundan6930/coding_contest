#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
void solve(int n)
{
    while (n % 2 == 0)
    {
        m[2]++;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            m[i]++;
            n = n / i;
        }
    }
    if (n > 2)
    {
        m[n]++;
    }
}
typedef pair<int, int> pi;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        int n;
        cin >> n;
        solve(n);
        for (auto i : m)
        {
            pq.push({i.second, i.first});
        }
        while (m.size() != 0)
        {
            int pro = 1;
            priority_queue<pi, vector<pi>, greater<pi>> mq;
            int prev = pq.top().first;
            while (!pq.empty())
            {
                pair<int, int> p = pq.top();
                pq.pop();
                pro *= p.second;
                m[p.second] = p.first - prev;
                if (p.first - prev > 0)
                {
                    mq.push({p.first - prev, p.second});
                }
                else
                {
                    m.erase(p.second);
                }
            }
            sum += (prev * pro);
            pq = mq;
        }
        cout << sum << endl;
    }
    return 0;
}
