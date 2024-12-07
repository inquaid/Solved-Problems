#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int start = max(i - 9, 0);
            for (int j = start; j < i; j++) {
                int temp = s[i] - '0' - (i - j);
                if ((s[j] - '0') < temp) {
                    for (int k = i; k >= j; k--) {
                        s[k] = s[k - 1];
                    }
                    // temp-=j;
                    s[j] = temp + '0';
                }
            }
        }

        cout << s << endl;
    }
}