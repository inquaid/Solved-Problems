#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long
int breadTotal, sausageTotal, cheeseTotal, breadInKitchen, sausageInKitchen,
    cheeseInKitchen, breadPrice, sausagePrice, cheesePrice, money;
bool isPossible(int mid) {
    // Conditions
    int totalBreadNeed = breadTotal * mid;
    int totalSausage = sausageTotal * mid;
    int totalCheese = cheeseTotal * mid;

    int needExtraBread =
        (max(0LL, totalBreadNeed - breadInKitchen)) * breadPrice;
    int needExtraSausage =
        (max(0LL, totalSausage - sausageInKitchen)) * sausagePrice;
    int needExtraCheese =
        (max(0LL, totalCheese - cheeseInKitchen)) * cheesePrice;

    return money >= (needExtraBread + needExtraSausage + needExtraCheese);
}

void binarySearchOnAnswers() {
    string s;
    cin >> s;
    breadTotal = count(s.begin(), s.end(), 'B');
    sausageTotal = count(s.begin(), s.end(), 'S');
    cheeseTotal = count(s.begin(), s.end(), 'C');

    cin >> breadInKitchen >> sausageInKitchen >> cheeseInKitchen;
    cin >> breadPrice >> sausagePrice >> cheesePrice;
    cin >> money;

    int l = 0, r = 1;
    while (isPossible(r)) {
        r *= 2;
    }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(mid)) {
            l = mid + 1;
        } else
            r = mid - 1; // r above means FFFTTTT
    }
    cout << l - 1;
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        newline;
    }
}

void solve() {
    // tTestCase();
    binarySearchOnAnswers();
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}