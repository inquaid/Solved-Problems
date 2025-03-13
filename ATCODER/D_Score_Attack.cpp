#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

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
bool comp(int a, int b) { return a > b; }

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

struct Edge {
    int a, b, cost;
};

const int INF = -10e11;
vector<vector<pair<int, int>>> adj;
vector<Edge> edges;

void dfs(int u, vi &vis) {
    vis[u] = 1;
    for(auto v : adj[u]) {
        if(!vis[v.first]) {
            dfs(v.first, vis);
        }
    }
}

void solve() {
    int v, e; cin >> v >> e;
    adj.resize(v + 1);
    for (int i = 0; i < e; ++i) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        Edge tempEdge;
        tempEdge.a = a;
        tempEdge.b = b;
        tempEdge.cost = c;
        edges.push_back(tempEdge);
    }
    // // print(adj[1]);
    // vi vis(v + 4, 0);
    // dfs(v, vis);
    // if(vis[1] != 0)  {
    //     print("inf");
    //     return;
    // }
    int n = v;
    vector<int> d(n + 1, INF);
    vector<bool> cycle(v + 1, 0);
    d[1] = 0;
    for (int i = 0; i < v - 1; ++i) {
        for(Edge e : edges) {
            if(d[e.a] == INF) continue;
            d[e.b] = max(d[e.b], d[e.a] + e.cost);
            // if(d[e.a] < INF) {
            //     d[e.b] = max(d[e.b], d[e.a] + e.cost);
            // }
        }
    }

    for (int i = 0; i < v; ++i) {
        for(auto edge : edges) {
            if (d[edge.a] == INF) continue;
            if (d[edge.a] + edge.cost > d[edge.b]) {
                d[edge.b] = d[edge.a] + edge.cost;
                cycle[edge.b] = true;
            }
            if (cycle[edge.a])
                cycle[edge.b] = true;
        }
    }

    if(cycle[v]) {
        print("inf");
    } else
        print(d[v]);
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