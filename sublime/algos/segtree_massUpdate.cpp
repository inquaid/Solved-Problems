#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct segtree {
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

int main() {
  int n, m; cin >> n >> m;;
 
  segtree st;
  st.init(n);
  for (int i = 0; i < m; ++i) {
    int type; cin >> type;
    if(type == 1) {
      int l, r, v; cin >> l >> r >> v;
      st.add(l, r, v);
    } else {
      int j; cin >> j;
      cout << st.get(j) << "\n";
    }
  }
 
}