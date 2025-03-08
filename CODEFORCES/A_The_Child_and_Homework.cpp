#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, string>> vs;
    for (size_t i = 0; i < 4; i++) {
        string s;
        cin >> s;
        vs.push_back({s.size() - 2, s});
    }

    sort(vs.begin(), vs.end());
    // for(auto i : vs) cout << i.first << endl;

    if ((vs[0].first * 2 <= vs[1].first) and (vs[2].first * 2 <= vs[3].first)) {
        cout << "C\n";
    } else if (vs[0].first * 2 <= vs[1].first) {
        cout << vs[0].second[0] << endl;
    } else if (vs[2].first * 2 <= vs[3].first) {
        cout << vs[3].second[0] << endl;
    } else
        cout << "C\n";
}