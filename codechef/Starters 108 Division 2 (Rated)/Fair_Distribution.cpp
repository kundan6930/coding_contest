#include <iostream>
#include <vector>
#include <cstring>

const int MOD = 998244353;

int dp[2050][2050];

int countBeautifulGrids(int n, int m) {
    memset(dp, 0, sizeof(dp));

    // Initialize base cases
    dp[0][0] = 1;

    // Dynamic programming to count beautiful grids
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i > 0)
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j > 0)
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }

    // Calculate the result based on the dynamic programming table
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int waysForRow = dp[i - 1][j];
            int waysForCol = dp[i][j - 1];
            result = (result + (1LL * waysForRow * waysForCol) % MOD) % MOD;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    int m;
    std::cin >> m;

    int result = countBeautifulGrids(n, m);
    std::cout << result << std::endl;

    return 0;
}