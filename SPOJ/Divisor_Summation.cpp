#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        int cnt = 0;
        for (int j = 1; j * j <= temp; j++) {
            if (temp % j == 0) {
                cnt += j;
                if (temp / j != j) {
                    cnt += temp / j;
                }
            }
        }
        cout << cnt - temp << "\n";
    }

    return 0;
}