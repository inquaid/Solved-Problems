#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n) {
    int res = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i != i) {
                res += 2;
            } else
                res++;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        int temp = __gcd(a, b);
        cout << countDivisors(temp) << "\n";
    }
}