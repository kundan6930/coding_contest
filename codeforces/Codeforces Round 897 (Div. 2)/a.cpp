// Define a function to calculate the Hamming distance between two integers
int hamming_distance(int x, int y) {
    // Calculate the xa of the two numbers
    int xa = x ^ y;
    // Calculate the number of set bits in the xa
    int distance = 0;
    while (xa) {
        xa &= xa - 1;
        distance++;
    }
    return distance;
}

// Define a function to count the number of pairs with a given distance
int count_pairs(vector<vector<int>> coordinates, int k) {
    // Initialize a variable to store the answer
    int ans = 0;
    // Loop through all pairs of points in the coordinates array
    for (int i = 0; i < coordinates.size(); i++) {
        for (int j = i + 1; j < coordinates.size(); j++) {
            // Calculate the distance between points i and j
            int dist = hamming_distance(coordinates[i][0], coordinates[j][0]) + hamming_distance(coordinates[i][1], coordinates[j][1]);
            // Check if the distance is equal to k
            if (dist == k) {
                // Increment the answer by 1
                ans++;
            }
        }
    }
    // Return the answer
    return ans;
}

// Test the function with an example input
int main() {
    vector<vector<int>> coordinates = {{1, 2}, {3, 4}, {5, 6}};
    int k = 6;
    cout << count_pairs(coordinates, k) << endl;
}
