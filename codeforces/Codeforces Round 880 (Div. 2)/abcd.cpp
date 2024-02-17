#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int q = 2;
    int queries[] = {15, 20};
    vector<int> prefix_max(n), suffix_min(n);
    prefix_max[0] = arr[0];
    suffix_min[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++) {
        prefix_max[i] = max(prefix_max[i - 1], arr[i]);
        suffix_min[n - i - 1] = min(suffix_min[n - i], arr[n - i - 1]);
    }
    for (int i = 0; i < q; i++) {
        int count = 0;
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (prefix_max[mid] * suffix_min[mid] == queries[i]) {
                count += n - mid;
                break;
            } else if (prefix_max[mid] * suffix_min[mid] > queries[i]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
