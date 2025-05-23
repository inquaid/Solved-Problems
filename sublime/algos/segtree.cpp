#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct segTree {
  ll size = 0, boundary = INT_MAX;
  vector <ll> res;
  int left(int v) {return (2 * v + 1);}
  int right(int v) {return (2 * v + 2);}
  void init(int n) {
    size = (1ll << (int)ceil(log2(n)));
    res.assign(2 * size, boundary);
  }

  void op(ll v) {
    res[v] = min(res[left(v)], res[right(v)]);
  }

  void build(int v, int lv, int rv, vector<ll> &a) {
    if(rv - lv == 1) {
      if(lv < (int)a.size()) {
        res[v] = a[lv];
      }
      return;
    }
    int m = (lv + rv) / 2;
    build(left(v), lv, m, a);
    build(right(v), m, rv, a);
    op(v);
  }

  void build(vector<ll> &a) {
    build(0, 0, size, a);
  }

  void set(int v, int lv, int rv, int i, int val) {
    if(rv - lv == 1) {
      res[v] = val; return;
    }
    int m = (lv + rv) / 2;
    if(i < m)
      set(left(v), lv, m, i, val);
    else
      set(right(v), m, rv, i, val);
    op(v);
  }

  void set(int i, int val) {
    set(0, 0, size, i, val);
  }

  ll get(int v, int lv, int rv, int l, int r) {
    if(lv >= r or l >= rv) {
      return boundary;
    }
    if(lv >= l and rv <= r) return res[v];
    int m = (lv + rv) / 2;
    ll ls = get(left(v), lv, m, l, r);
    ll rs = get(right(v), m, rv, l, r);
    return min(ls, rs);
  }

  ll get(int l, int r) {
    return get(0, 0, size, l, r);
  }
};

int main() {
  int n, m; cin >> n >> m;
  vector<ll> a(n); 
  for(auto &i : a) cin >> i;

  segTree st;
  st.init(n);

  st.build(a);
  for (int i = 0; i < m; ++i) {
     int type; cin >> type;
     if(type == 1) {
        int i, v; cin >> i >> v;
          st.set(i, v);
     } else {
        int l, r; cin >> l >> r;
        cout << st.get(l, r) << endl;
     }
   } 
}