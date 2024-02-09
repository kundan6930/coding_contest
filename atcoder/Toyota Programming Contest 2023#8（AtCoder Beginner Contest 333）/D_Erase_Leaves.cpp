#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int c;
int maxi=0;
void dfs(int v,vector<vector<int>>&adj,vector<bool> &vis) 
{
    c++;
   // cout<<c<<"*"<<endl;
    vis[v] = true;
    for (int u : adj[v]) 
    {
      //  cout<<v<<" "<<u<<endl;
       
        if (!vis[u])
        {
            dfs(u,adj,vis);
        }
         if(v==0)
        {
           maxi=max(maxi,c) ;
          // cout<<c<<endl;
           c=0;
        }
    }
}
int main (){
int n;
cin>>n;
vector<vector<int>>adj(n);
vector<bool> vis(n);
for(int i=0;i<n-1;i++)
{
    int u,v;
    cin>>u>>v;
    adj[u-1].push_back(v-1);
    adj[v-1].push_back(u-1);
}


if(adj[0].size()<=1)
{
    cout<<"1"<<endl;
}
else{

        
         maxi=0;
         c=0;
         dfs(0,adj,vis);
       // cout<<c<<endl;

cout<<n-maxi+1<<endl;
}
    return 0;
}