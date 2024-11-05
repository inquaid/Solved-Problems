#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;

    mp[1]++;
    mp[1]++;
    mp[200]++;
    // mp[1] = 0;
    mp.erase(1);
    cout << mp[3];
    cout << mp.size();
}