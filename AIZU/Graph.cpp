#include <bits/stdc++.h>
using namespace std;

int mtx[105][105];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int u;
        cin >> u;
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            mtx[u - 1][v - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != (n - 1))
                cout << mtx[i][j] << " ";
            else
                cout << mtx[i][j];
        }
        cout << endl;
    }
}