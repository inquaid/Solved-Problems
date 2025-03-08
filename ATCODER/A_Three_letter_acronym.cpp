#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p) {
    return is >> p.first >> p.second;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &elem : v)
        is >> elem;
    return is;
}

template <typename T, typename Y>
ostream &operator<<(ostream &os, const pair<T, Y> &p) {
    os << p.first << " " << p.second;
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (size_t i = 0; i < v.size(); ++i) {
        os << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &s) {
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
        if (!first) os << " ";
        os << elem;
        first = false;
    }
    return os;
}

template <typename T>
void sort_unique(vector<T> &vec) {
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

template <class... T>
void scan(T &...args) {
    (cin >> ... >> args);
}

template <typename T>
void print(const T &value) {
    cout << value << "\n";
}

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

template <typename Container>
void print_container(const Container &container) {
    cout << container << "\n";
}

#define all(x) (x).begin(), (x).end()

bool comp(int a, int b) { return a > b;}

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...) 
#endif

void tTestCase(int t) {
    int n;
    scan(n);
}

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    cout << (char)toupper(a[0]) << (char)toupper(b[0]) << (char)toupper(c[0]);
    // print();
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);
    
    solve();
    
    return 0;
}

