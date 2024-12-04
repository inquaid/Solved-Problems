#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int maxSum = INT_MIN, totalSum = 0, res = INT_MIN;
        vector<int> a1(n), a2(n);
        for (auto &i : a1)
            cin >> i;
        for (auto &i : a2)
            cin >> i;
        int maxIndex = 0;
        for (int i = 0; i < n; i++) {
            // maxSum = max(maxSum, a1[i] + a2[i]);
            int tempSum = a1[i] + a2[i];
            totalSum = 0;
            for (int j = 0; j < n; j++) {
                if (i != j)
                    totalSum += max(a1[j], a2[j]);
            }
            res = max(res, totalSum + tempSum);
        }
        cout << res << endl;
    }
}