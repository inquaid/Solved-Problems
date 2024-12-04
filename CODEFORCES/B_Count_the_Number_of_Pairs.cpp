#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp, caps, small;
        for (auto c : s) {
            if (islower(c)) {
                small[c]++;
            } else
                caps[c]++;
        }
        int res = 0;
        for (char i = 'a'; i <= 'z'; i++) {
            // cout << i << " " << (char)(i - 32) << endl;
            char s_ = i, c_ = (char)(i - 32);
            int smallest = min(small[s_], caps[c_]);
            res += smallest;
            small[s_] -= smallest;
            caps[c_] -= smallest;
            if (k > 0) {
                int maxPosible = 0;
                if (small[s_] > 0) {
                    maxPosible = floor(small[s_] / 2.0);
                } else {
                    maxPosible = floor(caps[c_] / 2.0);
                }
                res += min(k, maxPosible);
                k -= min(k, maxPosible);
            }
        }
        cout << res << endl;
    }
}