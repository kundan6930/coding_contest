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
        int a[n + 1];
        // intially we wark all no 1 to n as a prime.
        fill(a, a + n + 1, 1);
        // mark a[0] =false and a[1] = false because 0 and 1 is not prime no.
        a[0] = 0, a[1] = 0;
        // we are running the outer loop sqrt(n) times because
        // any no greater than sqrt(n) and it is composite no must have factor in [2,sqrt(n)] range and is marked as false .so no need to run loop after sqrt(n);
        for (int i = 2; i * i <= n; i++)
        {
            if (a[i])
            {
                // we are starting this loop from i*i because any number lesser than i*i and that no is composite no must have a factor lesser than i and is marked as false before so no need to start loop lesser than i*i;
                for (int j = i * i; j <= n; j += i)
                {
                    a[j] = false;
                }
            }
        }
        // to print prime no from range [0, n];
        for (int i = 0; i <= n; i++)
        {
            if (a[i])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}