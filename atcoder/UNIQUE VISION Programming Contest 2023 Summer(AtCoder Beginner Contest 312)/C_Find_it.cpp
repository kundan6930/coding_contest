#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int st, en;

bool dfs(int v,vector<vector<int>> &adj,vector<char> &col,vector<int> &par) {
    col[v] = 1;
    for (int u : adj[v]) {
        if (col[u] == 0) {
            par[u] = v;
            if (dfs(u,adj,col,par))
                return true;
        } else if (col[u] == 1) {
            en = v;
            st = u;
            return true;
        }
    }
    col[v] = 2;
    return false;
}

void find_cyl(vector<vector<int>> &adj,vector<char> &col,vector<int> &par) {
    col.assign(n+1, 0);
    par.assign(n+1, -1);
    st = -1;

    for (int v = 0; v < n; v++) {
        if (col[v] == 0 && dfs(v,adj,col,par))
            break;
    }
    if (st == -1) {
        cout << "-1"<<endl;
    } 
    else {
        vector<int> cyl;
        cyl.push_back(st);
        for (int v = en; v != st; v = par[v])
            cyl.push_back(v);
       // cyl.push_back(st);
        reverse(cyl.begin(), cyl.end());

        cout << cyl.size()<<endl;;
        for (int v : cyl)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}
int main (){
cin>>n;
vector<vector<int>> adj(n+1);
vector<int>a(n+1);
vector<char> col(n+1);
vector<int> par(n+1);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
     adj[i+1].push_back(a[i]);
 }
 find_cyl(adj,col,par);
    return 0;
}