#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 void solve(vector<vector<int>>& grid,int r,int c,int &k,vector<vector<int>>&vis)
    {
 if(r>=grid.size() || r<0 || c>=grid[0].size() || c<0 || vis[r][c]==1 || grid[r][c]==0)
        {
            return ;
        }
         k+=grid[r][c];
        // cout<<k<<endl;
        vis[r][c]=1;
        //up
        solve(grid,r-1,c,k,vis);
        //down
        solve(grid,r+1,c,k,vis);
        //left
        solve(grid,r,c-1,k,vis);
        //right
        solve(grid,r,c+1,k,vis);
        // vis[r][c]=0;
        return ;
       
    }
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if( grid[i][j]!=0)           
                {  
                       int k=0;
                      solve(grid,i,j,k,vis);
                       maxi=max(maxi,k);
                    
                }
            }
        }
       cout<<maxi<<endl;
}
    return 0;
}