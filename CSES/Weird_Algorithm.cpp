#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
void func(int n) {
    cout << n << " ";
    if (n <= 1)
        return;
    // else if (n % 2 != 0)
    //     func((3 * n) + 1);
    // else
    //     func(n / 2);
    func((n & 1) ? ((3 * n) + 1) : (n / 2));
}

signed main() {
    int n;
    cin >> n;
    func(n);
}