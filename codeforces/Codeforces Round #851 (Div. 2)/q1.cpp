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
        int a[n];
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==2) 
            {
                p++;
            }
        }
        int p1 = 0, i;
        for (i = 0; i < n; i++)
        {
            if(a[i]==2) 
            {
                p1++;
            }
            if (p1 == (p -p1))
            { // cout<<p<<" "<<p/p1<<endl;
                cout << i+1 << endl;

                break;
            }
        }
        if (i >= n)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}