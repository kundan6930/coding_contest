#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<vector<pair<int, int>>> &adj, vector<int> &dist, int source)
{
  set<pair<int, int>> s;
  dist[source] = 0;
  s.insert({0, source});
  while (!s.empty())
  {
    auto top = *(s.begin());
    int node_dist = top.first;
    int node = top.second;
    s.erase(s.begin());
    for (auto i : adj[node])
    {
      if (node_dist + i.second < dist[i.first])
      {
        auto it = s.find(make_pair(dist[i.first], i.first));
        if (it != s.end())
        {
          s.erase(it);
        }
        dist[i.first] = node_dist + i.second;
        s.insert(make_pair(dist[i.first], i.first));
      }
    }
  }
}
int main (){
int n,m,k,c;
cin>>n>>m>>k>>c;
int ans=0;
vector<vector<pair<int, int>>>adj(n+1);
for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    adj[u].push_back({v,1});
    adj[v].push_back({u,1});
   
}
 vector<int> dist(n + 1, INT_MAX);
   solve(adj,dist,c);
   for(int i=0;i<=n;i++)
   {
      //cout<<dist[i]<<" ";
      if(dist[i]<=k)
      {
         ans++;
      }
   }
   //cout<<endl;
    cout<<ans<<endl;
    return 0;
}