#include <bits/stdc++.h>
using namespace std;

const long long INF = LLONG_MAX / 4;

vector<vector<long long>> floydWarshallFromAdjList(
    int n,
    const vector<vector<pair<int,long long>>>& adj
) {
    vector<vector<long long>> dist(n, vector<long long>(n, INF));
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
        for (auto& [j, w] : adj[i]) {
            dist[i][j] = min(dist[i][j], w);
        }
    }

    for (int k = 0; k < n; ++k) {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]); 
        }
      }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,long long>>> adj(n);
    for (int e = 0; e < m; e++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
    }

    auto dist = floydWarshallFromAdjList(n, adj);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) 
                cout << -1 << " ";
            else 
                cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
