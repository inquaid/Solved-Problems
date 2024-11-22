#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> vs(n);
    for (int i = 0; i < n; i++) {
        cin >> vs[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << vs[i] << "\n";
    // }
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    vector<pair<int, int>> axixs = {{-1, 0},  {1, 0}, {0, -1}, {0, 1},
                                    {-1, -1}, {1, 1}, {-1, 1}, {1, -1}};

    if (0 <= x and x < n and 0 <= y and y < m) {
        for (auto [dx, dy] : axixs) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx >= 0 and nx < n and ny >= 0 and ny < m) {
                if (vs[nx][ny] != 'x') {
                    cout << "no";
                    return 0;
                }
            }
        }
    }

    cout << "yes";
}