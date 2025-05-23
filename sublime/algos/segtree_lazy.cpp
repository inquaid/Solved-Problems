#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct segtree {
  ll size, boundary = 0ll;
  ll NO_OPERATION = LLONG_MAX;
  vector<ll> operations;

  ll operation(ll a, ll b) {
    if(b == NO_OPERATION) return a;
    return b;
    // operations[v] = operations[v] + val;
  }

  void apply_operation(ll &a, ll b) {
    a = operation(a, b);
  }

  void init(int n) {
    size = (1ll << (int)ceil(log2(n)));
    operations.assign(2 * size, boundary);
  }

  void propagate(int v, int lv, int rv) {
    if(rv - lv == 1) return;
    apply_operation(operations[2 * v + 1], operations[v]);
    apply_operation(operations[2 * v + 2], operations[v]);
    operations[v] = NO_OPERATION; 
  }

  void modify(int v, int lv, int rv, int l, int r, int val) {
    propagate(v, lv, rv);
    if(lv >= r or l >= rv) return;
    if(lv >= l and rv <= r) {
      // op(v, val); return;
      apply_operation(operations[v], val);
      return;
    }
    int m = (lv + rv) / 2;
    modify(2 * v + 1, lv, m, l, r, val);
    modify(2 * v + 2, m, rv, l, r, val);
  }

  void modify(int l, int r, int val) {
    modify(0, 0, size, l, r, val);
  }

  ll get(int v, int lv, int rv, int i) {
    propagate(v, lv, rv);
    if(rv - lv == 1) return operations[v];
    int m = (lv + rv) / 2;
    ll res;
    if(i < m)
      res = get(2 * v + 1, lv, m, i);
    else
      res = get(2 * v + 2, m, rv, i);
    // return res + operations[v];
    return res;
  }

  ll get(int i) {
    return get(0, 0, size, i);
  }

};

int main() {
  int n, m; cin >> n >> m;;
 
  segtree st;
  st.init(n);
  for (int i = 0; i < m; ++i) {
    int type; cin >> type;
    if(type == 1) {
      int l, r, v; cin >> l >> r >> v;
      st.modify(l, r, v);
    } else {
      int j; cin >> j;
      cout << st.get(j) << "\n";
    }
  }
 
}