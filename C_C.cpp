#include <bits/stdc++.h>
using namespace std;

bool isSuperSubarray(const vector<int>& v, int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += v[i];
    }
    for (int i = start; i <= end; ++i) {
        if (sum % v[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isSuperSubarray(v, i, j)) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
