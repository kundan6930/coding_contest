#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum cost
// to make two binary strings equal
char flip(char c) {
    return c == '0' ? '1' : '0';
}
bool isEqual(string& s1, string& s2) {
    return s1 == s2;
}
// Helper function to find the minimum cost using recursion and memoization
int minCostUtil(int n,string& s1, string& s2, int x, int i, int j, vector<vector<int>>& dp) {
    // Base case: if the strings are equal, return 0
    if (isEqual(s1, s2)) {
        return 0;
    }
    
    // Base case: if the length is 0, return -1
    if (i == 0 || j == 0) {
        return -1;
    }
    
    // Check if the result is already computed and stored in the vector
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    
    // Initialize the minimum cost to a large value
    int min_cost = INT_MAX;
    
    // Try all possible operations on the last character
    for (int k = 0; k < n; k++) {
        // Flip s1[k] and s2[k] with cost x
        s1[k] = flip(s1[k]);
        s2[k] = flip(s2[k]);
        int cost = minCostUtil(n,s1, s2, x, i - 1, j - 1, dp);
        if (cost != -1) {
            min_cost = min(min_cost, cost + x);
        }
        // Undo the flip
        s1[k] = flip(s1[k]);
        s2[k] = flip(s2[k]);
        
        // Flip s1[k] and s1[k+1] with cost 1
        if (k < n - 1) {
            s1[k] = flip(s1[k]);
            s1[k+1] = flip(s1[k+1]);
            cost = minCostUtil(n,s1, s2, x, i - 1, j - 1, dp);
            if (cost != -1) {
                min_cost = min(min_cost, cost + 1);
            }
            // Undo the flip
            s1[k] = flip(s1[k]);
            s1[k+1] = flip(s1[k+1]);
        }
    }
    
    // Store and return the minimum cost or -1 if not possible
    dp[i][j] = min_cost == INT_MAX ? -1 : min_cost;
    return dp[i][j];
}

int minCost(string& s1, string& s2, int x, int n) {
    // Create a 2D vector to store the results of subproblems
    vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
    
    // Return the result of the recursive function
    return minCostUtil(n,s1, s2, x,n, n, dp);
}
// Function to flip a character


// Function to check if two strings are equal


int main()
{
    // Declare a variable to store the number of test cases
    int t;
    
    // Read the number of test cases from the standard input
    cin >> t;
    
    // Loop for each test case
    while (t--) {
    
        // Declare variables to store the length of strings,
        // the strings themselves and the cost
        int n, x;
        string s1, s2;
        
        // Read n, x, s1 and s2 from the standard input
        cin >> n >> x >> s1 >> s2;
        
        // Call the minCost function and print the result to the standard output
        cout << minCost(s1, s2, x, n) << endl;
    }
    
    return 0;
}
