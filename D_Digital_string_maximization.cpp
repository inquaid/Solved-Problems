#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        for (int i = n - 1; i > 0; i--) {
            // cout << s[i];
            while(s[i] > s[i-1] and s[i] != '0'){
                s[i]--;
                swap(s[i], s[i - 1]);
            }

        }
        cout << s << endl;
    }
}