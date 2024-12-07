#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b, int c) { return abs(a - b) <= abs(b - c); }

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end(), cmp);
        for (auto i : v)
            cout << i << " ";
    }
}