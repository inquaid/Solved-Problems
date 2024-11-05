#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> graph(n + 1, 0);
    // map<int, int>
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a] = 1;
        graph[b] = 1;
    }
    int star = -1;
    for (int i = 1; i <= n; i++) {
        if (graph[i] == 0) {
            graph[i] = -1;
            star = i;
            break;
        }
    }
    // cout << star;
    // return 0;
    cout << n - 1 << endl;
    if (n - 1 == 0)
        return 0;
    for (int i = 1; i <= n; i++) {
        if (graph[i] != -1)
            cout << star << " " << i << endl;
    }
}