
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A struct to store the number, heads and tails of each person
struct Person {
    int num, heads, tails;
    // A constructor to initialize the fields
    Person(int n, int h, int t) {
        num = n;
        heads = h;
        tails = t;
    }
};

// A comparator function to sort the persons by their success rates
bool compare(Person p1, Person p2) {
    // Calculate the success rates of p1 and p2
    long long s1 = (long long)p1.heads * (p1.tails + p2.tails + p2.heads);
    long long s2 = (long long)p2.heads * (p1.tails + p1.heads + p1.tails);
    // If the success rates are equal, break ties by the numbers
    if (s1 == s2) return p1.num < p2.num;
    // Otherwise, sort in descending order of success rates
    return s1 > s2;
}

int main() {
    // Read the input from standard input
    int N;
    cin >> N;
    // Create a vector to store the persons
    vector<Person> persons;
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        // Create a new person and add it to the vector
        Person p(i + 1, A, B);
        persons.push_back(p);
    }
    // Sort the vector using the comparator function
    sort(persons.begin(), persons.end(), compare);
    // Print the sorted numbers to standard output
    for (Person p : persons) {
        cout << p.num << " ";
    }
    cout<<endl;
    return 0;
}
