#include <bits/stdc++.h>
using namespace std;

const int N = 1e8;
vector<int> lp(N + 1);
vector<int> pr;

void seive() {
    // int cnt = 0;
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
            // cnt++;
        }
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int pyramidMaxRow = 14141;
    vector<int> pyramidIndex(pyramidMaxRow + 1);

    for (int x = 0; x <= pyramidMaxRow; x++) {
        pyramidIndex[x] = ((x * x) + x) / 2;
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (lp[n] != n) {
            cout << -1 << "\n";
            continue;
        }
        int index = lower_bound(pr.begin(), pr.end(), n) - pr.begin();
        int rowIndex =
            lower_bound(pyramidIndex.begin(), pyramidIndex.end(), index) -
            pyramidIndex.begin();
        if(pyramidIndex[rowIndex] != index)
            rowIndex--;

        cout << rowIndex + 1 << " " << index - pyramidIndex[rowIndex] + 1 << "\n";
    }

    return 0;
}