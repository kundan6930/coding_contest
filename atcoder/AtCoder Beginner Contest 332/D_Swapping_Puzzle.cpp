#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;
int ans=INT_MAX;
int solve(vector<vector<int>>a,vector<vector<int>>&b,int i,int j)
{
    if(i>=n-1 && j>=m-1)
    {
        for(int i1=0;i1<n;i1++)
        {
            for(int j1=0;j1<m;j1++)
            {
               if(a[i1][j1]!=b[i1][j1])
               {
                  return 10000;
               }
            }
        }
        return 0;
    }
   cout<<i<<" "<<j<<endl;
    int mini=10000;
    if(i+1<n && j<m)
    {
    swap(a[i][j],a[i+1][j]);
    mini=min(mini,solve(a,b,i+1,j)+1);
    swap(a[i][j],a[i+1][j]);
    }
    if(j+1<m && i<n)
    {
    swap(a[i][j],a[i][j+1]);
    mini=min(mini,solve(a,b,i,j+1)+1);
    swap(a[i][j],a[i][j+1]);
    }
    if(j+1<=m && i<=n)
    {
    mini=min(mini,solve(a,b,i,j+1));
    }
    if(i+1<n && j<m)
    {
     mini=min(mini,solve(a,b,i+1,j));
    }
    return mini;
}
int main (){

cin>>n>>m;
vector<vector<int>>a(n,vector<int>(m));
vector<vector<int>>b(n,vector<int>(m));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
    cin>>a[i][j];
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
    cin>>b[i][j];
    }
}
int k=solve(a,b,0,0);
if(k>=10000)
{
    cout<<"-1"<<endl;
}
else{
      cout<<k<<endl;
}
    return 0;
}