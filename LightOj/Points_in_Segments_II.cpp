#include <bits/stdc++.h>
using namespace std;
using ll = int;

struct segTree {
  ll size, boundary = 0ll;
  vector<ll> operations;

  void op(int v, int val) {
    operations[v] = operations[v] + val;
  }

  void init(int n) {
    size = (1ll << (int)ceil(log2(n)));
    operations.assign(2 * size, boundary);
  }

  void add(int v, int lv, int rv, int l, int r, int val) {
    if(lv >= r or l >= rv) return;
    if(lv >= l and rv <= r) {
      op(v, val); return;
    }
    int m = (lv + rv) / 2;
    add(2 * v + 1, lv, m, l, r, val);
    add(2 * v + 2, m, rv, l, r, val);
  }

  void add(int l, int r, int val) {
    add(0, 0, size, l, r, val);
  }

  ll get(int v, int lv, int rv, int i) {
    if(rv - lv == 1) return operations[v];
    int m = (lv + rv) / 2;
    ll res;
    if(i < m) 
      res = get(2 * v + 1, lv, m, i);
    else
      res = get(2 * v + 2, m, rv, i);
    return res + operations[v];
  }

  ll get(int i) {
    return get(0, 0, size, i);
  }
};

// const int m = 1e8 + 18;

void tTestCase(int t) {
  int n, q; cin >> n >> q;
  segTree segt;
  int m = 0;
  vector<int> a(n), b(n), c(q);
  set<int> st;
  // vector<pair<int,int>> vpr;
  for (int i = 0; i < n; ++i) {
    cin >> a[i] >> b[i];
    st.insert(a[i]); st.insert(b[i]);
  }

  for (int i = 0; i < q; ++i) {
    cin >> c[i]; st.insert(c[i]);
  }

  map<int, int> mp;
  int id = 0;
  for(auto i : st) {
    mp[i] = ++id;
  }
  for (int i = 0; i < n; ++i) {
    a[i] = mp[a[i]];
    b[i] = mp[b[i]];
  }

  for (int i = 0; i < q; ++i) {
    c[i] = mp[c[i]];
  }

  segt.init(id + 5);
  for (int i = 0; i < n; ++i) {
    int l = a[i], r = b[i];
    segt.add(l, r + 1, 1);
  }
  for (int i = 0; i < q; ++i) {
    int x = c[i]; 
    // bug(x);
    // if(x > m) {
    //   cout << (0) << "\n";
    // } else
      cout << (segt.get(x)) << "\n";
  }
}

void solve() {
  int t = 1; 
  cin >> t;
  for(int i = 1; i <= t; i++) {
    cout << "Case " << i << ":\n";
    tTestCase(i);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}