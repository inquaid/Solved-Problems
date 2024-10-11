#include <bits/stdc++.h>
using namespace std;
const int N = 10000000;
vector<int> lp(N + 1);
vector<int> pr;

void seive() {
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }
}

int binexp(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b = b >> 1;
    }
    return res;
}

int isAllDigitPrime(int n) {
    int size = floor(log10(n));
    // int div = binexp(10, size);
    int div = 10;
    while (n / div > 0) {
        int temp = n % div;
        cout << temp << endl;
        // if (div > temp)
        //     return false;

        // if (lp[temp] != temp)
        //     return false;
        // n = n / 10;
        div *= 10;
    }
    return true;
}

int main() {
    // int n = 233377;
    // cout << n % 10 << endl;
    // cout << n % (10 * 10) << endl;
    // cout << n % (10 * 10 * 10) << endl;
    seive();
    if (isAllDigitPrime(632647)) {
        cout << "Y";
    } else
        cout << "N";
}