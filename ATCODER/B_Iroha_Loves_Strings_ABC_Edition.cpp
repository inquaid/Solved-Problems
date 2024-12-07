#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    multiset<string> mst;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        mst.insert(temp);
    }
    for (auto i : mst)
        cout << i;
}