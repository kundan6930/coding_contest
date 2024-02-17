#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<vector<int>>&adj,int node,vector<int>&vis,int &c)
{
    c++;
     vis[node]=1;
     for(auto i:adj[node])
     {
        if(!vis[i])
        {
            solve(adj,i,vis,c);
        }
     }
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<vector<int>>adj(n+1);

for(int i=0;i<m;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
}
int ans=-1;
for(int i=1;i<=n;i++)
{
    vector<int>vis(n+1);
    int c=0;
    solve(adj,i,vis,c);
    if(c==n)
    {
        ans=i;
        break;
    }
}
cout<<ans<<endl;

    return 0;
}