#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << 'a';
        n--;
    }
    for (int i = 1; i <= (n / 2); ++i) {
        cout << char('a' + i % 2);
        cout << char('a' + i % 2);
    }
}
