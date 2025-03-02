// coding on bus
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp >= k * 3)
            res += temp - (k * 3);
        else if (temp >= k * 2)
            res += temp - (k * 2);
        else if (temp >= k)
            res += temp - k;
        else
            res += temp;
    }
    cout << res;
}