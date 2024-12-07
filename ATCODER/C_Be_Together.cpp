#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = INT_MAX;
    for (int i = -100; i <= 100; i++) {
        int tempSum = 0;
        for (int indx = 0; indx < n; indx++) {
            int store = a[indx] - i;
            tempSum += (store * store);
        }
        res = min(res, tempSum);
    }

    cout << res;
}