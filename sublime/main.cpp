#include <iostream>
using namespace std;

int main() {
    int a, b;
    int t; cin >> t; // Read number of test cases
    while (t--) {
    cin >> a >> b;
    // Your "optimized" solution (to be tested)
    cout << a - b << endl; // Example bug (subtraction)
    }
}