#include <bits/stdc++.h>
using namespace std;

// A utility function to count good substrings in a string
int countGoodSubstrings(string s) {
    int ans = 0;
    int n = s.length();
    vector<int> pref(n + 1); // prefix sums
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + (s[i - 1] - 'a' + 1);
    }
    for (int i = 1; i <= n; i++) { // ending index of substring
        for (int j = 0; j < i; j++) { // starting index of substring
            int sum = pref[i] - pref[j]; // sum of substring
            if (sum == (i - j) * (i - j + 1) / 2) ans++; // if good, increment answer
        }
    }
    return ans;
}

// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n;
        string s;
        cin >> s >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            string sub = s.substr(l - 1, r - l + 1); // substring between l and r
            cout << countGoodSubstrings(sub) << '\n'; // print answer
        }
    }
    return 0;
}
