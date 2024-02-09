#include <bits/stdc++.h>
using namespace std;
using ll=long long;

const int maxi = 200005;

vector<int> tree[maxi];
int last[maxi];

void dfs(int node, int parent) {
    int cnt = 0;
    for (int ne : tree[node]) {
        if (ne != parent) {
            dfs(ne, node);
            cnt += last[ne];
        }
    }
    if (cnt == 0) {
        last[node] = 1;
    } else {
        last[node] = cnt;
    }
}

int main() {
     ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(1, -1);

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, last[i]);
    }

    cout << ans-1 << endl;

    return 0;
}
