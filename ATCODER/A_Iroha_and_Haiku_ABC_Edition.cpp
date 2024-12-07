#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;
    int a, b, c;
    cin >> a >> b >> c;
    mp[a]++;
    mp[b]++;
    mp[c]++;

    if (mp[5] == 2 and mp[7] == 1) {
        cout << "YES\n";
    } else
        cout << "NO\n";
}