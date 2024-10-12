#include <bits/stdc++.h>
using namespace std;
#define int long long

int binexp(int a, int b, int m) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b = b >> 1;
    }
    return res;
}

signed main() {
    int b, p, m;
    while (scanf("%lld%lld%lld", &b, &p, &m) != EOF) {
        printf("%lld\n", binexp(b, p , m));
    }
}