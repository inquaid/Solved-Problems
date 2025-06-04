#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> g[N];

int main() {
  int n, m; cin >> n >> m;

  for (int i = 0; i < m; ++i) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  for(auto x : g) {
    cout << x.size() << " ";
    // cout << x.first << " -> ";
    // for(auto i : x.second) {
    //   cout << i << " ";
    // }
    cout << endl;
  }

}