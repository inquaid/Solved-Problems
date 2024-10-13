#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        return 0;
    }
    vector<int> primes(n + 2, 1);

    for (int i = 2; i <= n + 1; i++) {
        if (primes[i] == 1) {
            for (int j = i + i; j <= n + 1; j += i) {
                primes[j] = 2;
            }
        }
    }
    cout << 2;
    cout << endl;
    for (int i = 2; i <= n + 1; i++) {
        cout << primes[i] << " ";
    }
}