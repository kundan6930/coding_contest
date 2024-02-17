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
        cin>>n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int f = 0;
        for (int i = 0; i < n-1; i++)
        {
            if ((b[i] <= a[n - 1] && a[i] <= b[n - 1]) || (a[i] <= a[n - 1] && b[i] <= b[n - 1]))
            {
                continue;
            }
            else
            {
                f = 1;
                break;
            }
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