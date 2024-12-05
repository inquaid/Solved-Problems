#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        // multiset<pair<int, int>> mst;
        multimap<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            mp.insert({a + b, {a, b}});
        }
        for (auto i : mp) {
            cout << i.second.first << " " << i.second.second << " ";
        }
        cout << endl;
    }
}