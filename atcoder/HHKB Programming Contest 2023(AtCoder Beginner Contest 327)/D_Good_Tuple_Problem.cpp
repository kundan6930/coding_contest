#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;
bool solve(vector<vector<int>> adj,vector<int> side)
{
bool is_bipartite = true;
queue<int> q;
for (int st = 0; st < n; ++st) {
    if (side[st] == -1) {
        q.push(st);
        side[st] = 0;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int u : adj[v]) {
                if (side[u] == -1) {
                    side[u] = side[v] ^ 1;
                    q.push(u);
                } else {
                    is_bipartite &= side[u] != side[v];
                }
            }
        }
    }
}
return is_bipartite;
}
int main (){

cin>>n>>m;
vector<int> side(n, -1);
vector<int>a(m),b(m);
vector<vector<int>>adj(n);
for(int i=0;i<m;i++)
{
    cin>>a[i];
    a[i]=a[i]-1;
}
for(int i=0;i<m;i++)
{
    cin>>b[i];
    b[i]=b[i]-1;
}
for(int i=0;i<m;i++)
{
    adj[a[i]].push_back(b[i]);
    adj[b[i]].push_back(a[i]);
} 
int f;
f=solve(adj,side);
if(f==0)
{
    cout<<"No"<<endl;
}  
else{
    cout<<"Yes"<<endl;
}
}