#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &a : v)
        {
            cin >> a;
        }
        bool f = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((i & (i + 1)) != 0)
            {
                if (v[i] > v[i + 1])
                {
                    f = false;
                    break;
                }
            }
        }

        if (f)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}