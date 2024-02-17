#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool dfs(vector<vector<int>>&adj, vector<int>&vis,int node,int &tar,int &tar2)
{
    if (node == tar || node == tar2) {
        return true;
    }
      vis[node]=1;
      for(auto i:adj[node])
      {
        if(!vis[i])
        {
            if(dfs(adj,vis,i,tar,tar2));
            {
                return true;
            }
        }
      }
      return false;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    vector<int>vis(n+1);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int A,B,C;
        cin>>A>>B>>C;
      bool result = dfs(adj,vis,A, B, C) && dfs(adj,vis,B, A, C) && dfs(adj,vis,C, A, B);

            if (result) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
    }
}
    return 0;
}