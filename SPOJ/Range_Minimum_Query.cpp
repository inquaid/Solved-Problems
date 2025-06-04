#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9, MAXN = 18;

int st[N][MAXN];
vector<int> a;

int f(int a, int b) {
  return min(a, b);
}

void build(int n) {
  for (int i = 1; i <= n; ++i) {
    st[i][0] = a[i - 1];
  }
  for (int k = 1; k < MAXN; ++k) {
    for (int i = 1; i + (1 << k) - 1 <= n; ++i) {
      st[i][k] = f(st[i][k - 1], st[i + (1 << (k - 1))][k - 1]);
    }
  }
}

int query(int l, int r) {
  int k = 31 - __builtin_clz(r - l + 1);
  return f(st[l][k], st[r - (1 << k) + 1][k]);
  // int sum = 0;
  // for (int i = MAXN - 1; i >= 0; i--) {
  //   if ((1 << i) <= r - l + 1) {
  //     // sum += st[l][i];
  //     sum = f(sum, st[l][i]);
  //     l += 1 << i;
  //   }
  // }
  // return sum;
}

int main() {
  int n; cin >> n;
  a.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  // for (int i = 0; i < n; ++i) {
    // cout << a[i] << " ";
  // }
  build(n);
  // cout << (query(2, 8));
  int q; cin >> q;
  for (int i = 0; i < q; ++i) {
    int l, r; cin >> l >> r;
    cout << query(l + 1, r + 1) << endl;
  }
}