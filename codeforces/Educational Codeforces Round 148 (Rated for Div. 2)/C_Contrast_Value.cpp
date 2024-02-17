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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int f, p;
        int i=0;
        while(a[i]==a[i+1])
        {
           i++;
        }
        if(n>1)
        {
        if (a[i+1] > a[i])
        {
            f = 1;
            p = a[i];
        }
        else 
        {
            f = 0;
            p = a[i];
        }
        }
        int c = 0;
        for (; i < n; i++)
        {
            if(f==0)
            {
              if(a[i]<=p)
              {
                 p = a[i];
                continue;
              }  
            if (a[i] > p)
            {
                c++;
                f = 1;
            }
            
            }
            else{
                if(a[i]>=p)
                {
                     p = a[i];
                    continue;
                }
            if (a[i] < p)
            {
                c++;
                f = 0;
            }
            }
            p = a[i];
        }
        sort(a,a+n);
        if (a[0] == a[n - 1])
        {
            cout << "1" << endl;
        }
        else
        {
            cout << c + 2 << endl;
        }
    }
    return 0;
}