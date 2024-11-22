#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    deque<pair<int, int>> dq; // value, pos
    for (int i = 0; i < n; i++) {
        if (dq.empty()) {
            dq.push_back({v[i], i + 1});
            cout << 0 << " ";
        } else {
            while (!dq.empty() and dq.back().first >= v[i]) {
                dq.pop_back();
            }
            if (dq.empty())
                cout << 0 << " ";
            else
                cout << dq.back().second << " ";
            dq.push_back({v[i], i + 1});
        }
    }
}