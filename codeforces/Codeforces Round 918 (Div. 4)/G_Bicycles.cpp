#include <bits/stdc++.h>
#include <random>

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define el '\n'
#define popcount __builtin_popcountll
#define ios                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define vi vector<int>
#define sz(x) (int)x.size()
#define rep(i,l,r) for(int i = l;i < r;i++)

const int mod = 1e9 + 7;
const ll INF = 1e18 + 10;
const ld PI = acos(-1), eps = 1e-7;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll random(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}

int main() {
    ios;
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<vector<int>>> graph(n);
        for(int i = 0;i < m;i++) {
            int u, v, c;
            cin >> u >> v >> c;
            u--, v--;
            graph[u].push_back({v, c});
            graph[v].push_back({u, c});
        }
        vector<int> weights(n);
        for(int i = 0;i < n;i++) {
            cin >> weights[i];
        }
        priority_queue<vector<ll>> pq;
        vector<vector<ll>> distances(n, vector<ll>(n, INF));
        pq.push({0, 0, 0});
        while(!pq.empty()) {
            auto p = pq.top();
            pq.pop();
            int u = p[1], b = p[2];
            if(-p[0] > distances[u][b])
                continue;
            for(auto &v: graph[u]) {
                int di = v[1], node = v[0];
                if((di * weights[b] + -p[0]) <= distances[node][b]) {
                    distances[node][b] = di * weights[b] + -p[0];
                    distances[node][node] = di * weights[b] + -p[0];
                    pq.push({-(di * weights[b] + -p[0]), node, b});
                    pq.push({-(di * weights[b] + -p[0]), node, node});
                }
            }
        }
        ll ans = INF;
        for(int i = 0;i < n;i++) {
            ans = min(ans, distances[n - 1][i]);
            cout<<distances[n - 1][i]<<" ";
        }
        cout<<endl;
        cout << ans << el;
    }
    cout.flush();
}
