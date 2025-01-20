// Your C++ code goes here
#include <bits/stdc++.h>
using namespace std;

void add(vector<int> &a, vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        a[i] += b[i];
    }
}

bool isEqual(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> temp(d);
    vector<vector<int>> v;
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < d; ++k) {
            cin >> temp[k];
        }
        v.push_back(temp);
    }
    vector<int> target(d);
    for (int k = 0; k < d; ++k) {
        cin >> target[k];
    }

    for (int i = 0; i < (1 << n); ++i) {
        vector<int> sum(d, 0);
        for (int bits = 0; bits < n; ++bits) {
            if ((i >> bits) & 1) {
                add(sum, v[bits]);
            }
        }
        if (isEqual(sum, target)) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}