#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A function to find the maximum number of groups
int maxGroups(vector<int> A, int K) {
  // Sort the array in descending order
  sort(A.begin(), A.end(), greater<int>());
  // Initialize the number of groups and the current group size
  int groups = 0;
  int groupSize = 0;
  // Loop through the array
  for (int i = 0; i < A.size(); i++) {
    // If the current group size is less than K and the current block type is not more than floor(K/2), add it to the group
    if (groupSize < K && A[i] <= K / 2) {
      groupSize += A[i];
    }
    // If the current group size is equal to K, increment the number of groups and reset the group size
    else if (groupSize == K) {
      groups++;
      groupSize = 0;
      i--;
    }
    // If the current group size is more than K or the current block type is more than floor(K/2), skip it
    else {
      continue;
    }
  }
  // Return the number of groups
  return groups;
}

// A function to read the input and print the output
void solve() {
  // Read the number of test cases
  int T;
  cin >> T;
  // Loop through each test case
  while (T--) {
    // Read N and K
    int N, K;
    cin >> N >> K;
    // Read the array A
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }
    // Find and print the maximum number of groups
    cout << maxGroups(A, K) << endl;
  }
}

// The main function
int main() {
  // Call the solve function
  solve();
  return 0;
}