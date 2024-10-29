#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++) {
        string a, b;
        cin >> a >> b;
        int res = a.size(), i;
        for (i = 0; i < res; i++) {
            if (a[i] != b[i])
                break;
        }
        if (i != 0)
            i--;
        // cout << a.size() << endl;
        cout << res + b.size() - i << endl;
    }
}