#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << 0;
        n--;
        if(n)
        cout << 1;
        n--;
        for (int i = 0; i < n; i++) {
            cout << 0;
        }
        cout << endl;
    }
}