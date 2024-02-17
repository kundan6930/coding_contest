#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int n, x;
int solve(vector<int> &a, int x, vector<vector<int>>&dp,int pos)
{
    
    if (x == 0)
    {
        return 1;
    }
     if (x < 0 || pos<0)
    {
        return 0;
    }
    if (dp[x][pos] != -1)
    {
        return dp[x][pos];
    }
    
    int c=solve(a,x,dp,pos-1); 
    c+=solve(a,x-a[pos],dp,pos);
    return dp[x][pos] = c % mod;
}
int main()
{

    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>>dp(x + 1, vector<int>(n,-1));
    cout << solve(a, x, dp,n-1) << endl;

    return 0;
}
