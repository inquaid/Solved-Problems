#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct segTree {
  ll size = 0, boundary = 0;
  vector<ll> res;
  int left(int v) {return (2 * v + 1);}
  int right(int v) {return (2 * v + 2);}

  void init(int n) {
    size = (1ll << (int)ceil(log2(n)));
    res.assign(2 * size, boundary);
  }

  void op(ll v) {
    res[v] = (res[left(v)] + res[right(v)]);
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
    return ls + rs;
  }

  ll get(int l, int r) {
    return get(0, 0, size, l, r);
  }

};
void print(segTree st, int n) {
  for (int i = 0; i < n; ++i) {
    cout << st.get(i, i + 1) << " ";
  } cout << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  for (int tc = 1; tc <= t; ++tc) {
    cout << "Case " << tc << ":\n";
    int n, q; cin >> n >> q;
    vector<ll> a(n); 
    for(auto &i : a) cin >> i;
    segTree st;
    st.init(n);
    st.build(a);
    for (int i = 0; i < q; ++i) {
      // cout << st.get(i, i + 1) << " "; 
      int type; cin >> type;
      if(type == 1) {
        int indx; cin >> indx; 
        cout << st.get(indx, indx + 1) << "\n";
        st.set(indx, 0);
      } else if(type == 2) {
        int indx, v; cin >> indx >> v; 
        int temp = st.get(indx, indx + 1) + v;
        st.set(indx, temp);
        // cout << st.get() << "\n";
        // print(st, n); return 0;

      } else {
        int from, to; cin >> from >> to;  cout << st.get(from , to + 1) << "\n";
      }

    }
    // cout << "\n";
  }
}