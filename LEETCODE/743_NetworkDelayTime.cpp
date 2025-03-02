// Your C++ code goes here
class Solution {
  public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k) {
        const int N = 1e4;
        vector<pair<int, int>> g[N];
        for (auto v : times) {
            g[v[0]].push_back({v[1], v[2]});
        }

        const int inf = 1e8;
        vector<int> vis(n + 1, 0), dist(n + 1, inf);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, k});
        dist[k] = 0;
        while (q.size()) {
            auto [d, u] = q.top();
            q.pop();
            if (vis[u])
                continue;
            vis[u] = 1;
            for (auto [v, cost] : g[u]) {
                if (dist[v] > dist[u] + cost) {
                    dist[v] = dist[u] + cost;
                    q.push({dist[v], v});
                }
            }
        }
        int mn = -1, cnt = 0, c1 = 0;
        for (auto i : dist) {
            if (i != inf and i != 0) {
                mn = max(mn, i);
            } else if (i == inf)
                cnt++;
        }
        if (cnt > 1)
            return -1;
        return mn;
    }
};