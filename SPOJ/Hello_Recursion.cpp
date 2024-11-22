#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int sum(int n, vi v) {
    if (n == v.size())
        return 0;

    return v[n] + sum(n + 1, v);
}

int main() {
    int t;
    cin >> t;
    int res = 0;
    int n;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        vi v(n);
        for (auto &i : v)
            cin >> i;
        int indx = 0;
        res = sum(indx, v);
        printf("Case %d: %d\n", i, res);
    }
}