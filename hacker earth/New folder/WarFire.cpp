#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int n,s;
int solve1(vector<int> a,int pos,int sum, vector<vector<int>> &dp)
{
     if(pos==n)
     {
         return abs(s-2*sum);
     }
     if(dp[pos][sum]!=-1)
     {
        return dp[pos][sum];
     }
    ll l= solve1(a,pos+1,sum+a[pos],dp);
   ll r=  solve1(a,pos+1,sum,dp);
   return dp[pos][sum]=min(l,r);
}
void solve() {
   int t;
   cin>>t;
   while(t--)
   {
    
     cin>>n;
     vector<int> a(n);
     s=0;
    for(int i=0;i<n;i++)
     {
        cin>>a[i];
        s+=a[i];
     }
     vector<vector<int>> dp(n+1,vector<int>(s+1,-1));
     cout<<solve1(a,0,0,dp)<<endl;
   }
}


int main() {
   
    solve();
   return 0;
}