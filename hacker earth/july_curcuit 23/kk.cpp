#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of operations
int minOperations(vector<int>& A, int K) {
    int n = A.size(); // Size of the array
    int sum = 0; // Sum of the array elements
    for (int x : A) sum += x; // Calculate the sum

    // If the sum is already greater than or equal to K, no operation is needed
    if (sum >= K) return 0;

    // dp[i][j] stores the minimum number of operations needed to make the sum of A[0..i] equal to j
    vector<vector<int>> dp(n, vector<int>(2 * sum + 1, INT_MAX));

    // Base case: no operation is needed to make the sum of A[0] equal to A[0]
    dp[0][A[0] + sum] = 0;

    // Loop for each element of the array
    for (int i = 1; i < n; i++) {
        // Loop for each possible sum value
        for (int j = -sum; j <= sum; j++) {
            // If the previous state is valid, we can either keep A[i] as it is or multiply it by -1
            if (dp[i - 1][j + sum] != INT_MAX) {
                // Keep A[i] as it is, update the sum and the number of operations
                dp[i][j + A[i] + sum] = min(dp[i][j + A[i] + sum], dp[i - 1][j + sum]);
                // Multiply A[i] by -1, update the sum and the number of operations
                dp[i][j - A[i] + sum] = min(dp[i][j - A[i] + sum], dp[i - 1][j + sum] + 1);
            }
        }
    }

    // Find the minimum number of operations among all possible sums greater than or equal to K
    int ans = INT_MAX;
    for (int j = K; j <= sum; j++) {
        ans = min(ans, dp[n - 1][j + sum]);
    }

    // If no such sum exists, return -1, otherwise return the answer
    return ans == INT_MAX ? -1 : ans;
}

// Driver code
int main() {
    int T; // Number of test cases
    cin >> T;
    while (T--) {
        int N, K; // Size of the array and the target sum
        cin >> N >> K;
        vector<int> A(N); // Array of integers
        for (int i = 0; i < N; i++) cin >> A[i]; // Input the array elements
        cout << minOperations(A, K) << endl; // Output the answer
    }
    return 0;
}