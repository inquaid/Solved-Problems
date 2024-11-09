#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), v;
        for (auto &i : a)
            cin >> i;
        int i = n - 2, j = -1;
        for (i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {
                for (j = i - 1; j >= 0; j--) {
                    if (a[j] > a[j + 1]) {
                        break;
                    }
                }
                break;
            }
        }
        cout << j + 1 << endl;
    }
}