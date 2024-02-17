#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int solve(int k, vector<int> a, vector<int> b, vector<int> g)
{
    int s = k, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            s = b[i];
        }
        else if (b[i] == s)
        {
            s = a[i];
        }
        if (s == g[i])
        {
            c++;
        }
    }
    return c;
}
int main()
{
    
   
        
        cin >> n;
        vector<int> a(n), b(n), g(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> g[i];
        }
        int maxi = 0;
        for (int i = 1; i <= 3; i++)
        
            maxi = max(maxi, solve(i, a, b, g));
        cout << maxi << endl;
    
    return 0;
}
