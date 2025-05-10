#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct segtree {
  int size;
  vector<ll> sums, operations;

  void init(int n) {
    size = (1ll << (int)ceil(log2(n)));
    // size = 1;
    // while(size < n) size *= 2;
    // cout << size << endl;
    operations.assign(2 * size, 0ll);
    // for(auto s : sums) cout << s << " ";
  }

  void add(int v, int lv, int rv, int l, int r, ll val) {
    if(lv >= r or l >= rv) return;
    if(lv >= l and rv <= r) {
      // cerr << l << " " <<  r << " " << lv << " " << rv << endl;
      operations[v] = max(operations[v], val); return;
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
    return max(res, operations[v]);
  }

  ll get(int i) {
    return get(0, 0, size, i);
  }
};

int main() {
  int n, m; cin >> n >> m;;

  // int size = 1;
  // while(size < n) size *= 2;
  // cout << size << endl;
  // int s2 = 1ll << (int)ceil(log2(n)); 
  // cout << s2 << endl;
  segtree st;
  st.init(n);
  // vector<int> a(n);
  // for (int i = 0; i < n; ++i) {
    // int v; cin >> v; 
    // st.set(i, v);
    // cin >> a[i];
  // }
  // for(auto i : a ) cout << i ;
  // st.build(a);
  // return 0;
 
  for (int i = 0; i < m; ++i) {
    int type; cin >> type;
    if(type == 1) {
      int l, r, v; cin >> l >> r >> v;
      // st.set(i, v);
      st.add(l, r, v);
    } else {
      int j; cin >> j;
      cout << st.get(j) << "\n";
      // cout << st.sum(l, r) << "\n";
    }
  }
  // for(auto i : st.sums) cout << i ;
  // for (int i = 0; i < n; ++i) {
  //   cout << st.sum(i, i + 1) <<" ";
  // }
}