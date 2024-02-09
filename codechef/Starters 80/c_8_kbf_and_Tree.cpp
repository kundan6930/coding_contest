#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<vector<ll>>adj[],vector<bool>&vis,vector<ll>&xr,ll i)
{
  vis[i]=true;
  for(auto j:adj[i] )
  {
    if(!vis[j[0]])
    {
        xr[j[0]]=xr[i]^j[1];
        solve(adj,vis,xr,j[0]);
    }
  }
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll n;
      cin>>n;
     vector<vector<ll>>adj[n+1];
     ll u,v,w;
     for(ll i=0;i<n-1;i++)
     {
            cin>>u>>v>>w;
           // v--;
          //  u--;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
     }
     vector<ll>xr(n+1);
     vector<bool>vis(n+1,false);
     solve(adj,vis,xr,1);
     map<ll,pair<ll,ll>>m;
     
     ll flag;
     for(ll i=1;i<=n;i++)
     {
       flag=0;
      for(ll j=i+1;j<=n;j++)
      {
          ll k=xr[i]^xr[j];
          //cout<<k<<endl;
          if(m.find(k)==m.end())
          {
            m[k]={i,j};
            
          }
          else
          {
             cout<<m[k].first<<" "<<m[k].second<<" "<<i<< " "<<j<<endl;
            flag=1;
            break;
          }
      } 
      if(flag==1)
      {
        break;
      }
     }
     if(flag==0)
     {
      cout<<"-1"<<endl;
     }

    }
    return 0;
}