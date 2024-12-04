#include <bits/stdc++.h>
using namespace std;

int totalLines(int x) { return floor(-1 + sqrt(1 + (8 * x))) / 2.0; }

int totalBalls(int n) { return (n * (n + 1)) / 2.0; };

int main() {
    cout << totalLines(5);
    /*
    1       1       1
        1      1
            1
    */
    // cout << totalBalls(2);
    return 0;
    int t;
    cin >> t;
    while (t--) {
        int w, b;
        cin >> w >> b;
        if (w < b) {
            swap(w, b);
        }
        w += totalBalls(totalLines(b));
        cout << totalLines(w) << endl;
    }

    return 0;
}
