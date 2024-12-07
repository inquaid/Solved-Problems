#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        int temp;
        cin >> v[i];
    }

    int res = 1;
    int i = 0;
    string s = "";
    for (int i = n;; i++) {
        int ans = i;
        bool chk = true;
        while (ans) {
            int temp = ans % 10;
            for (int check = 0; check < k; check++) {
                if (temp == v[check]) {
                    chk = false;
                    break;
                }
            }
            if (chk == false)
                break;
            ans /= 10;
        }
        if (chk) {
            cout << i;
            return 0;
        }
    }
}