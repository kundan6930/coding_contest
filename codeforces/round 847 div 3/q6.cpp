#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int n,c;
     cin>>n>>c;
     vector<int>a(n-1);
     a[0]=c;
     for(int i=1;i<n;i++)
    {
     cin>>a[i];
    }
    int a1,b1;
    vector<vector<int>>dis1(n+1,vector<int>(n+1,1e9));
    for(int i=0;i<n-1;i++)
    {
      cin>>a1>>b1;
      dis1[a1][b1]=1;
      dis1[b1][a1]=1;
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        if(i==j)
        {
            dis1[i][j]=0;
        }
      }
    }
    for(int k=1;k<=n;k++)
    {
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        dis1[i][j]=min(dis1[i][j],dis1[i][k]+dis1[k][j]);
      }
    }
    }
   
    
    for(int i=1;i<n;i++)
    {  int mini=INT_MAX;
      for(int j=i-1;j>=0;j--)
      {
        mini=min(mini,dis1[a[i]][a[j]]);
      }
      cout<<mini<<" ";
    }
    cout<<endl;



    }
    return 0;
}