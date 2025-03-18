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

map<int, int> p, sz;

void make_set(int v) {
    p[v] = v; sz[v] = 1;
}

int find_set(int v) {
    if(v == p[v]) {return v;}
    return p[v] = find_set(p[v]);
}

void union_sets(int a, int b) {
    a = find_set(a), b = find_set(b);
    if(a != b) {
        if(sz[a] < sz[b]) swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
    }
}

void tTestCase(int t) {
    int n;
    scan(n);
}

void solve() {
    int n, m; cin >> n >> m;

    for (int i = 0; i <= n; ++i) {
        make_set(i);
    }

    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        union_sets(a, b);
    }

    unordered_map<int, vector<int>> groups;
    for (int i = 1; i <= n; ++i) {
        int parent = find_set(i);
        groups[parent].push_back(i);
    }
    // int one = 0, two = 0, three = 0, more = 0;
    vector<vector<int>> one, two, three;
    for(auto member : groups) {
        int sz = member.ss.size();
        if(sz > 3) {
            print(-1); return;
        } else if(sz == 3) {
            three.push_back(member.ss);
        } else if(sz == 2) {
            two.push_back(member.ss);
        } else 
            one.push_back(member.ss);
    }
    if(two.size() > one.size() or ((one.size() - two.size()) % 3 != 0)) {
        print(-1); return;
    }
    for(auto evry : three) {
        print(evry);
    }
    int i = 0;
    while(i < two.size()) {
        print(two[i][0], two[i][1], one[i][0]);
        i++;
    }
    while(i < one.size()) {
        // print(one[i][0], one[i][1], one[i][2]);
        cout << one[i][0] << " ";
        i++;
        cout << one[i][0] << " ";
        i++;
        cout << one[i][0] << "\n";
        i++;
    }
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