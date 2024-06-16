#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    long long result = 0;

    for (int i = 0; i < n; i++) {
        int res = 0;
        int max_val = v[i];

        for (int j = i; j < n; j++) {
            res ^= v[j];
            max_val = max(max_val, v[j]);
            result = (result + (res * (long long) max_val) % M) % M;
        }
    }

    cout << result << '\n';

    return 0;
}
