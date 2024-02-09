#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int n, x;
int main()
{
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>>dp(n,vector<int>(x+1,0));
    
    for(int i=0;i<n;i++)
   { 
     dp[i][0]=1;
   }
   for(int i=0;i<n;i++)
   {
     for(int j=1;j<=x;j++)
     {
         if(i>0)
         {
           dp[i][j]=dp[i-1][j];
         }
          
        if( j-a[i]>=0 )
        {
            dp[i][j]+=dp[i][j-a[i]];
             dp[i][j]=dp[i][j]%mod;
           // cout<<dp[i][j]<<" "<<i<<" "<<j<<endl;
        }
        
          
            // dp[i][j]=dp[i][j];
        
     }
   }
   cout<< dp[n-1][x]<<endl;
    return 0;
}
