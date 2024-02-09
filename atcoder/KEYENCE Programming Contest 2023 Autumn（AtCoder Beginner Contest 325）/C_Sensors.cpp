#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;
void solve(int r,int c,vector<vector<char>>&a)
{
    if(r<0 || c<0 || r>=n || c>=m || a[r][c]=='.')
    {
        return ;
    }
    a[r][c]='.';
   // cout<<r<<" "<<c<<endl;
    solve(r+1,c,a);
    solve(r,c+1,a);
    solve(r-1,c,a);
    solve(r,c-1,a);
    solve(r+1,c+1,a);
    solve(r+1,c-1,a);
    solve(r-1,c-1,a);
    solve(r-1,c+1,a);
}
int main (){

cin>>n>>m;
vector<vector<char>>a(n,vector<char>(m));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
int ans=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]=='#')
        {
            solve(i,j,a);
            ans+=1;
        }
    }
}
cout<<ans<<endl;
    return 0;
}