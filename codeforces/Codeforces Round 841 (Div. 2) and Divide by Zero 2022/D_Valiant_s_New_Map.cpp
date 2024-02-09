#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;
/*void print(vector<vector<int>>a)
{
    for(int i=0;i<=n;i++)
      {
        for(int j=0;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
      }
}*/
 bool solve(vector<vector<int>>a,int mid)
 { //cout<<mid<<endl;
    vector<vector<int>>prefix_sum(n+1,vector<int>(m+1,0));
       for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
            prefix_sum[i][j]=prefix_sum[i-1][j]+prefix_sum[i][j-1]-prefix_sum[i-1][j-1]+(a[i][j]>=mid);
        }
      }
     //  print(prefix_sum);
       for(int i=mid;i<=n;i++)
      {
        for(int j=mid;j<=m;j++)
        {
           int sum= prefix_sum[i][j]-(prefix_sum[i-mid][j]+prefix_sum[i][j-mid])+prefix_sum[i-mid][j-mid];
           //cout<<sum<<endl;
           if(sum==mid*mid)
           {
             return true;
           }
        }
      }
      return false;
     

 }
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      
      cin>>n>>m;
      vector<vector<int>>a(n+1,vector<int>(m+1,0));
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
      }
    //  print(a);
     // solve(a,m);
      
      int s=1,e=min(n,m),ans;
      while(s<=e)
      {
        int m=(s+e)/2;
        if(solve(a,m))
        {
          ans=m;
          s=m+1;
        }
        else
        {
            e=m-1;
        }
      }
   cout<<ans<<endl;
      }
    return 0;
}