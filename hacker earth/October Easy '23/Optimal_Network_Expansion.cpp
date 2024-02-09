#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void dfs(vector<vector<int>>&adj,vector<int>&vis,int node,int &c)
{
    vis[node]=1;
    c+=1;
    for(auto i:adj[node])
    {
        if(!vis[i])
        {
            dfs(adj,vis,i,c);
        }
    }
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,k;
cin>>n>>m>>k;
vector<vector<int>>adj(n+1);
vector<int>vis(n+1);
for(int i=0;i<m;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
vector<int>ans;
 for(int i=1;i<=n;i++)
 {
    int c=0;
     if(!vis[i])
     {
        dfs(adj,vis,i,c);
       // cout<<c<<" "<<i<<endl;
        ans.push_back(c);
     }
 }
 sort(ans.begin(),ans.end(),greater<int>());
 ll ans1=0;
 int i=0;
 while(k>=0)
 {
    ans1+=ans[i];
    i++;
    k--;
 }
 cout<<ans1<<endl;
    return 0;
}