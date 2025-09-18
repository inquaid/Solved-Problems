// bfs
  vi ind(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    for(auto j : g[i]) {
      ind[j]++;
    }
  }
  queue<int> q;
  for (int i = 1; i <= n; ++i) {
    if(ind[i] == 0) q.push(i);
  }
  vi tp;
  while(q.size()) {
    int u = q.front(); q.pop();
    tp.push_back(u);
    for(auto v : g[u]) {
      if(--ind[v] == 0) q.push(v);
    }
  }
  vi res(n + 1, 0);
  int cnt = n;
  for(auto u : tp) res[u] = cnt--;
  for (int i = 1; i <= n; ++i) {
    cout << res[i] << " ";
  } newl;

  // dfs
void dfs(int u) {
  vis[u] = 1;
  // print(u);
  for(auto v : g[u]) {
    if(!vis[v]) {
      dfs(v);
    }
  }
  ans.push_back(u);
}

  ans.clear();
  for (int i = 1; i <= n; ++i) {
    if(!vis[i]) dfs(i);
  }
  reverse(all(ans));
  // print(ans);
  int cnt = n;
  vi res(n + 1, 0);
  for(auto elem : ans) {
    res[elem] = cnt--;
  }
  for (int i = 1; i <= n; ++i) {
    cout << res[i] << " ";
  } newl;
