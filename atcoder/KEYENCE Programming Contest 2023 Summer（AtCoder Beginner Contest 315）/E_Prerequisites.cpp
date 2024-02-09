#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(vector<int> adj[], int node, vector<int> &ans, vector<bool> &vis)
{
    vis[node] = true;
    for (auto i : adj[node])
    {
        if (!vis[i])
        {
            solve(adj, i, ans, vis);
        }
    }
    ans.push_back(node);
}
int main()
{
    
        int n; 
        cin >> n;
         vector<int> adj[n+1];
        for(int j=0;j<n;j++)
        {
        int e;
        cin >> e;
        for (int i = 0; i < e; i++)
        {
            int b;
            cin  >> b;
            adj[j+1].push_back(b);
        }
        }
        vector<int> ans;
        vector<bool> vis(n+1, false);
        // for (int i = 0; i < n; i++)
        // {
        //     if (!vis[i])
        //     {
                solve(adj, 1, ans, vis);
        //     }
        // }
       // reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size()-1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    return 0;
}