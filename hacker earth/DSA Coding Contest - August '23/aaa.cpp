#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod = 1000000007;
int main() {
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
   cin >> n;
   vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int maxi = n;
   vector<vector<int>>dp(n + 1, vector<int>(2 * maxi + 1, 0));
    dp[0][maxi] = 1;  
    for (int i = 1; i <= n; ++i) {
        for (int j = -maxi; j <= maxi; ++j) {
            dp[i][maxi + j] = dp[i - 1][maxi + j];
            int prev = j - a[i - 1];
            if (prev >= -maxi && prev <= maxi) {
                dp[i][maxi + j] = (dp[i][maxi + j] + dp[i - 1][maxi + prev]) % mod;
            }
        }
    }
    for (int i = -maxi; i <= maxi; ++i) {
        int count = dp[n][maxi + i];
        if(i==0)
        {
            count-=1;
        }
        cout << count << " ";
    }
    return 0;
}
