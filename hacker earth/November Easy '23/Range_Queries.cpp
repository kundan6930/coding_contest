#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> solve(int n)
{
    vector<vector<int>> a(20, vector<int>(n+1));
    for (int i = 0; i < 20; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j >> i) & 1)
            {
                a[i][j]=a[i][j-1]+1;
            }
            else{
                 a[i][j]=a[i][j-1];
            }
        }
    }
    // for (int i = 0; i < 20; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //      cout<<endl;
    // }
    // cout<<endl;
    return a;
}
int main()
{
    int t;
    cin >> t;
   vector<vector<int>>ct = solve(100000);
 
    while (t--)
    {
        int l, r, x;
        cin>>l>>r>>x;
        int ans=ct[x-1][r]-ct[x-1][l-1];
        cout<<ans<<endl;
    }
    return 0;
}