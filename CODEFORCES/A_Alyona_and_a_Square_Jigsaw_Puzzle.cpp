#include <bits/stdc++.h>
using namespace std;

bool isInt(double a) { return ceil(a) == floor(a); }

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, res = 0, cnt = 1, total = 0, fill = 1;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            int temp;
            cin >> temp;
            total += temp;
            fill += (i - 1) * 8;

            if (isInt(sqrt(total)) and ((int)sqrt(total) & 1)) {
                res++;
            }
        }
        cout << res << endl;
    }
}
