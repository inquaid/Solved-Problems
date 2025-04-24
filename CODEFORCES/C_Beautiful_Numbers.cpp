#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <math.h>
#include <climits>

#define int long long
#define all(x) (x).begin(), (x).end()

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p) {
    return is >> p.first >> p.second;
}

template <typename T> istream &operator>>(istream &is, vector<T> &v) {
    for (auto &elem : v)
        is >> elem;
    return is;
}

template <typename T, typename Y>
ostream &operator<<(ostream &os, const pair<T, Y> &p) {
    os << p.first << " " << p.second;
    return os;
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
    for (size_t i = 0; i < v.size(); ++i) {
        os << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    return os;
}

template <typename T> ostream &operator<<(ostream &os, const set<T> &s) {
    auto it = s.begin();
    while (it != s.end()) {
        os << *it;
        if (++it != s.end())
            os << " ";
    }
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, const unordered_set<T> &s) {
    bool first = true;
    for (const auto &elem : s) {
        if (!first)
            os << " ";
        os << elem;
        first = false;
    }
    return os;
}

template <typename T> void sort_unique(vector<T> &vec) {
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

template <class... T> void scan(T &...args) { (cin >> ... >> args); }

template <typename T> void print(const T &value) { cout << value << "\n"; }

template <typename T, typename... Args>
void print(const T &first, const Args &...rest) {
    cout << first;
    if constexpr (sizeof...(rest) > 0) {
        cout << " ";
        print(rest...);
    } else {
        cout << "\n";
    }
}

template <typename Container> void print_container(const Container &container) {
    cout << container << "\n";
}

#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff first
#define ss second
bool comp(int a, int b) { return a > b; }

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

void tTestCase(int t) {
    int n;
    scan(n);
}

int a, b, n; 
const int M = 1000000007; 
int f(int x) {
    while(x) {
        int temp = x % 10;
        if(temp != a and temp != b) return 0;
        x /= 10;
    }
    return 1;
}
vi fact;
int inv(int a) {
  return a <= 1 ? a : M - (long long)(M/a) * inv(M % a) % M;
}
int ncr(int n, int m) {
    return fact[n + m] * inv(fact[n]) % M * inv(fact[m]) % M;
}

void solve() {
    cin >> a >> b >> n;
    if(a == b) {
        int sum = n * a;
        if(f(sum)) print(1);
        else print(0);
        return;
    }
    int fct = 1;
    fact.push_back(1);
    for (int i = 1; i <= n; ++i) {
        fct = ((fct % M) * (i % M)) % M;
        fact.push_back(fct);
    }
    // print(fact);
    if(a > b) swap(a, b);
    int mn = b - a;
    int sum = a * n, cnt = 0;
    for (int i = 0; i <= n; ++i) {
        if(f(sum)) {
            cnt = (cnt + ncr(n - i, i)) % M;
        }
        sum += mn;
    }
    print(cnt);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);


    solve();

    return 0;
}