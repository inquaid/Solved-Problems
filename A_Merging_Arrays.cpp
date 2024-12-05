#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int i = 0, j = 0;
    while (i < n and j < m) {
        if (a[i] == b[j]) {
            cout << a[i] << " ";
            cout << a[i] << " ";
            i++;
            j++;
        } else if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        } else {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }
    while (j < m) {
        cout << b[j] << " ";
        j++;
    }
}