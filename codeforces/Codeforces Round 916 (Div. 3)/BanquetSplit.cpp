#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 10005;


int banquets[MAX_N];
int waysToRemove[MAX_N];

void dfs(int node, int parent, int banquet,vector<vector<int>>&adj) {
    banquets[node] = banquet;
    cout<<node<<" -> "<<banquet<<endl;
    for (int child : adj[node]) {
        if (child != parent) {
            dfs(child, node, 3 - banquet, adj); // Alternating banquets
        }
    }
}

pair<int, int> findMinRemovals(int X, int Y, int N, const vector<pair<int, int>>& edges) {
    vector<int> count(3, 0); // Count of people in each banquet
    for (int i = 1; i <= N; ++i) {
        count[banquets[i]]++;
    }

    int removals = 0;
    int ways = 1;

    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        if ((u == X && v == Y) || (u == Y && v == X)) {
            // Skip the new relationship for this query
            continue;
        }
        if (banquets[u] == banquets[v]) {
            // The edge needs to be removed to avoid conflict
            removals++;
            ways = (ways * count[banquets[u]]) % 1000000007; // Modulo for large numbers
        }
    }

    return {removals, ways};
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<vector<int>> adj(N+1);

        vector<pair<int, int>> edges;
        for (int i = 0; i < N - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges.push_back({u, v});
        }
        for(int i=0;i<=N;i++)
        {
            cout<<i <<"-> ";
            for(int j=0;j<adj[i].size();j++)
            {
                cout<< adj[i][j]<<" ";
            }
            cout<<endl;
        }

        dfs(1, 0, 1,adj); // Start DFS from node 1

        int Q;
        cin >> Q;

        while (Q--) {
            int X, Y;
            cin >> X >> Y;

            auto result = findMinRemovals(X, Y, N, edges);
            if (result.first > 0) {
                cout << "No " << result.first << " " << result.second << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}