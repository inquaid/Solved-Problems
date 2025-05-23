#include <bits/stdc++.h>
using namespace std;

using Edge = pair<int,int>;

int prim(int N, vector<vector<Edge>>& adj) {
    vector<bool> in_mst(N, false);
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    int total_weight = 0;

    pq.push({0, 0});

    while (!pq.empty()) {
        auto [w, u] = pq.top(); 
        pq.pop();
        if (in_mst[u]) continue;
        in_mst[u] = true;
        total_weight += w;

        for (auto& [wt, v] : adj[u]) {
            if (!in_mst[v]) {
                pq.push({wt, v});
            }
        }
    }

    return total_weight;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<Edge>> adj(N);

    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    int mst_weight = prim(N, adj);
    cout << mst_weight << "\n";
    return 0;
}
