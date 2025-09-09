#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Segment tree storing pair<burst_time, index>
// min is by pair lexicographic order => (smaller burst) then (smaller index)
struct SegTree {
  int size = 1;
  pair<ll,int> boundary = {LLONG_MAX, INT_MAX};
  vector<pair<ll,int>> st;

  inline int left(int v)  { return 2*v + 1; }
  inline int right(int v) { return 2*v + 2; }

  void init(int n) {
    // next power of two
    int pw = 1;
    while (pw < n) pw <<= 1;
    size = pw;
    st.assign(2*size, boundary);
  }

  void build(int v, int lv, int rv, const vector<pair<ll,int>>& a) {
    if (rv - lv == 1) {
      if (lv < (int)a.size()) st[v] = a[lv];
      return;
    }
    int m = (lv + rv) / 2;
    build(left(v), lv, m, a);
    build(right(v), m, rv, a);
    st[v] = min(st[left(v)], st[right(v)]);
  }
  void build(const vector<pair<ll,int>>& a) { build(0, 0, size, a); }

  void set(int v, int lv, int rv, int i, pair<ll,int> val) {
    if (rv - lv == 1) {
      st[v] = val;
      return;
    }
    int m = (lv + rv) / 2;
    if (i < m) set(left(v), lv, m, i, val);
    else       set(right(v), m, rv, i, val);
    st[v] = min(st[left(v)], st[right(v)]);
  }
  void set(int i, pair<ll,int> val) { set(0, 0, size, i, val); }

  pair<ll,int> get(int v, int lv, int rv, int l, int r) {
    if (lv >= r || l >= rv) return boundary;
    if (lv >= l && rv <= r) return st[v];
    int m = (lv + rv) / 2;
    auto a = get(left(v), lv, m, l, r);
    auto b = get(right(v), m, rv, l, r);
    return min(a,b);
  }
  // query on half-open interval [l, r)
  pair<ll,int> get(int l, int r) { return get(0, 0, size, l, r); }
};


// process struct
struct Proc {
  int id;    // original PID (1..n)
  ll at;     // arrival time
  ll bt;     // burst time
  ll ct = 0; // completion time
  ll tat = 0;// turnaround time
  ll wt = 0; // waiting time
};

bool comp(const Proc &a, const Proc &b){
    if (a.at != b.at) return a.at < b.at;
    return a.id < b.id;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<Proc> p(n);
  for (int i = 0; i < n; ++i) {
    ll at, bt;
    cin >> at >> bt;
    p[i].id = i + 1;
    p[i].at = at;
    p[i].bt = bt;
  }

  // sort by arrival time, tie by id 
  sort(p.begin(), p.end(), comp);

  SegTree seg;
  seg.init(n);


  int ptr = 0;               // points to next process in sorted vector to "arrive"
  ll t = (n>0 ? p[0].at : 0); // current time (start at first arrival)
  int remaining = n;
  const auto INFPAIR = make_pair(LLONG_MAX, INT_MAX);

  // to store results by original pid index for neat printing
  vector<Proc> ans_by_pid(n + 1); // 1-based 

  while (remaining > 0) {
    // add all processes that have arrived by time t into segment tree
    while (ptr < n && p[ptr].at <= t) {
      seg.set(ptr, make_pair(p[ptr].bt, ptr));
      ++ptr;
    }

    auto best = seg.get(0, n);
    if (best == INFPAIR) {
      // no jobs available, jump time to next arrival
      if (ptr < n) t = p[ptr].at;
      continue;
    }

    int idx = best.second;      // index 
    // execute process p[idx]
    seg.set(idx, INFPAIR);     // remove 
    t += p[idx].bt;
    p[idx].ct = t;
    p[idx].tat = p[idx].ct - p[idx].at;
    p[idx].wt  = p[idx].tat - p[idx].bt;

    ans_by_pid[p[idx].id] = p[idx];

    --remaining;
  }

  cout << "PID\tAT\tBT\tCT\tTAT\tWT\n";
  int totalWT = 0, totalTAT = 0;
  for (int pid = 1; pid <= n; ++pid) {
    const Proc &x = ans_by_pid[pid];
    totalWT += x.wt; totalTAT += x.tat;
    cout << x.id << "\t"
         << x.at << "\t"
         << x.bt << "\t"
         << x.ct << "\t"
         << x.tat << "\t"
         << x.wt << "\n";
  }
cout << "Avg WT: " << totalWT / n << " Avg TAT: " << totalTAT / n << endl;

  return 0;
}
