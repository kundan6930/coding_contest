#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int n,vector<int>dp)
{
    double p = log10(n)/log10(3);
    if(n==0)
    {
        return 0;
    }
    if(ceil(p)==floor(p) || (n && (!(n & (n - 1)))))
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
     int k1 = log10(n)/log10(3);
     int k2 = log10(n)/log10(2);
    return dp[n]=min(solve(n-pow(2,k2),dp)+1,solve(n-pow(3,k1),dp)+1);
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
         int n;
         cin>>n;
         vector<int>dp(n+1,-1);
         cout<<solve(n,dp)<<endl;
    }
    
    return 0;
}

vector<int>a;