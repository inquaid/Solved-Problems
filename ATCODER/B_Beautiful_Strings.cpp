#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto chars : s)
        mp[chars]++;
    for (auto i : mp) {
        if (i.second & 1) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}