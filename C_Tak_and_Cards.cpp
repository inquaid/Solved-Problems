#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j];
            
        }
    }

    cout << res;
}