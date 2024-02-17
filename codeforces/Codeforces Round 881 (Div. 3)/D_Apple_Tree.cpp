#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(  vector<vector<ll>>&adj,vector<ll>&dis, int node,int par,ll &c,map<int,int>&m)
{
    if(adj[node].size()==1 && node!=1) 
    {
        dis[node]=1;
    }
    for(auto i:adj[node])
    {
        if (i != par) 
        {
            solve(adj,dis ,i,node,c,m);
            dis[node]+=dis[i];
        }
    }
    
}
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    vector<ll>dis(n+1);
    for(int i=0;i<n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
      //  cout<<u<<" "<<v<<endl;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    ll q;
    cin>>q;
   ll qr[q][2];
    for(int i=0;i<q;i++)
    {
      cin>>qr[i][0]>>qr[i][1];
    }
    ll c=0;
   map<int,int>m;
    solve(adj,dis,1,0,c,m);
   // cout<<c<<"*"<<endl;
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for(int i=0;i<q;i++)
    {
        
        ll ans=dis[qr[i][0]]*dis[qr[i][1]];
        cout<<ans<<endl;
      }

    }

    return 0;
}