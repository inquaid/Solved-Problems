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


int n, d;
const int M = 1e9 + 7;
int inv(int a) {
  return a <= 1 ? a : M - (long long)(M/a) * inv(M % a) % M;
}
vector<int> fact(1e5+10);
void preCompute() {
    int n = 1e5 + 2;
    int ans = 1;
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) {
        ans = ((ans % M) * (i % M)) % M;
        fact[i] = ans;
    }
    // return ans;
}
int ncr(int n, int r) {
    // bug(n, r, fact[n], fact[r], fact[n - r]);
    // return fact(n) / (fact(r) * fact(n - r));
    return fact[n] * inv(fact[r]) % M * inv(fact[n - r]) % M;
}

int f(int i) {
    if(d >= i - 1) {
        // if(i == 4)
        //     bug(ncr(n + 1, i), ncr(d, i - 1), d, i - 1);
        return (ncr(n + 1, i) - ncr(d, i - 1) + M) % M;
    } 
    return ncr(n + 1, i);
}

void solve() {
    preCompute();
    cin >> n;
    vi a(n + 1);
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i <= n; ++i) {
        cin >> a[i]; mp[a[i]]++;
        if(mp[a[i]] > 1) mx = a[i];
    }
    int p1 = 0, p2 = 0;
    for (int i = 0; i <= n; ++i) {
        if(a[i] == mx) {
            if(!p1) {
                p1 = i + 1;
            } else p2 = i + 1;
        }
    }
    d = p1 - 1 + n + 1 - p2;
    // bug(d);
    // sort(all(a));
    // print(a);
    // print(ncr(15, 4));
    for (int i = 1; i <= n + 1; ++i) {
        print(f(i));
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();    return 0;

    preCompute();
    // print(fact[5]);
    print(ncr(3,3));
}