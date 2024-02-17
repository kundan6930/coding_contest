#include <iostream>
#include <set>
using namespace std;

int main() {
  // Declare a multiset of pairs to store the segments
  multiset<pair<int, int>> segments;
  // Declare a variable to store the number of operations
  int q;
  // Read the number of operations from the standard input
  cin >> q;
  // Loop through each operation
  for (int i = 0; i < q; i++) {
    // Declare a variable to store the type of operation
    char op;
    // Declare two variables to store the endpoints of the segment
    int l, r;
    // Read the operation and the segment from the standard input
    cin >> op >> l >> r;
    // Check if the operation is addition or deletion
    if (op == '+') {
      // Add the segment to the multiset
      segments.insert({l, r});
    } else {
      // Remove the segment from the multiset
      segments.erase(segments.find({l, r}));
    }
    // Declare a variable to store the answer
    bool ans = false;
    // Check if the multiset is empty or has only one segment
    if (segments.empty() || segments.size() == 1) {
      // The answer is false
      ans = false;
    } else {
      // Get an iterator to the first segment in the multiset
      auto it = segments.begin();
      // Get an iterator to the second segment in the multiset
      auto next_it = next(it);
      // Check if the first segment does not intersect with the second segment
      if (it->second < next_it->first) {
        // The answer is true
        ans = true;
      } else {
        // Get an iterator to the last segment in the multiset
        auto last_it = prev(segments.end());
        // Get an iterator to the second last segment in the multiset
        auto prev_it = prev(last_it);
        // Check if the last segment does not intersect with the second last segment
        if (last_it->first > prev_it->second) {
          // The answer is true
          ans = true;
        }
      }
    }
    // Print the answer to the standard output
    cout << (ans ? "YES" : "NO") << endl;
  }
  return 0;
}
