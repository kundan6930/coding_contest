#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, y;
    cin >> x >> y;

    vector<int> prefixSum(n + 1), prefixXOR(n + 1);
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + a[i - 1];
        prefixXOR[i] = prefixXOR[i - 1] ^ a[i - 1];
    }

    int k = y - x + 1;
    int maxCost = INT_MIN, minX = -1;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {

        while (!dq.empty() && dq.front() < i - k + 1)
        {
            dq.pop_front();
        }

        while (!dq.empty() && a[dq.back()] <= a[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= k - 1)
        {
            int cost = prefixSum[dq.back() + 1] - prefixSum[dq.front()] - (prefixXOR[dq.back() + 1] ^ prefixXOR[dq.front()]);

            if (cost > maxCost)
            {
                maxCost = cost;
                minX = dq.front();
            }
        }
    }

    cout << minX << " " << minX + k - 2 << endl;
    return 0;
}
