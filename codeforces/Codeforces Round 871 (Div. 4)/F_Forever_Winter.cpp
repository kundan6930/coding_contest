#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<int> adj[], int node,int l, vector<int>&ans, vector<bool> &vis)
{
    vis[node] = true;
    ans[l]++;
    for (auto i : adj[node])
    {
        if (!vis[i])
        {
            solve(adj, i,l+1, ans, vis);
        }
    }
    
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1],adj1[n+1],adj2[n+1];
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj1[a].push_back(b);
            adj2[b].push_back(a);
            adj[b].push_back(a);
             adj[a].push_back(b);
        }
        int no1,no2;
        vector<int>ans1;
        int c1=0,c2=0;
        for(int i=1;i<=n;i++)
        {
           // cout<<i<<" "<<adj1[i].size()<<" "<<endl;
            if(adj1[i].size()==0)
            {
              no1=i;
              c1++;
            }
            if(adj2[i].size()==0)
            {
              no2=i;
              c2++;
            }
        }
        int   nb;
        if(c1==1)
        {
           nb=no1;
        }
        else if(c2==1)
        {
            nb=no2;
        }
        cout<<nb<<endl;
         vector<bool>vis(n+1);
         vector<int>ans(3);
       solve(adj,nb,0,ans,vis);
       cout<<ans[1]/ans[0]<<" "<<ans[2]/ans[1]<<endl;

}
    return 0;
}