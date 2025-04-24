#include <bits/stdc++.h>

#define int long long
#define all(x) (x).begin(), (x).end()
#define newl cout << "\n"

using namespace std;

using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;
using vii = vector<pii>;
using ll = long long;
using lll = __int128;

#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff first
#define ss second

// #ifdef LOCAL
// // #include "debug.h"
// #else
// #define bug(...)
// #endif

int ceil(int a,int b){ return (a+b-1)/b; }
bool comp(int a, int b) { return a > b; }

// int phi(int n) {
//   int result = n;
//   for (int i = 2; i * i <= n; ++i) {
//     if(n % i == 0) {
//       while(n % i == 0) n /= i;
//       result -= (result / i);
//     }
//   }
//   if(n > 1) {
//     result -= (result / n);
//   }
//   return result;
// }
const int N = 200005;
vector<int> phi(N + 5, 0), pref(N + 5, 0);
void phi_1_to_n() {
  int n = N;
  phi[0] = 1; // special case for pre sum
  phi[1] = 1;
  for (int i = 2; i <= n; i++) {
    phi[i] = i - 1;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 2 * i; j <= n; j += i) {
      phi[j] -= phi[i];
    }
  }
}

void solve() {
  int n; cin >> n;
  while(n) {
    int l = 0, r = N;
    // while(l <= r) {
      // int
    // }
    auto it = lower_bound(all(pref), n) - pref.begin();
    // it--;
    if(it == 0) {
      // print("0/1");
      cout << "0/1\n";

    } else {
      // print(it, phi[it]);
      // print(phi[it], pref[it - 1], pref[it],  pref[it + 1]);
      // something / it
      int need = pref[it] - n;
      // print(phi[it], need);
      int i = 1, cnt = 1;
      while( cnt <= (phi[it] - need)) {
        if(__gcd(i, (int)it) == 1) cnt++;
        i++;
      }
      cout << i - 1 << "/" << it << "\n";
      // print(i - 1, it);
      // for (int i = 0; i < phi[it] - need; ++i) {
      //   if()
      // }
    }
    cin >> n;
  }
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    // auto t1 = std::chrono::high_resolution_clock::now();
    // int temp = 0;
    // for (int i = 1; i <= 200000; ++i) {
    //   cout << phi(i) << "\n";
    //   temp += phi(i);
    //   print(temp);
    // }
  phi_1_to_n();
  pref[0] = 1;
  for (int i = 1; i <= N; ++i) {
    pref[i] = pref[i - 1] + phi[i]; 
  }
  // vi v = {10, 11, 13, 14, 15};
  // auto it = lower_bound(all(v), 12) - v.begin();
  // print(it);
  // print(phi[200000]);
  // pref.erase(pref.begin());
  // print(pref[0]);
  // print(pref[]);
  // print(phi);
  // print(pref);
  // vi v = {1, 2, 3, 4, 5};
  // vi pref2(v.size() + 1, 0);
  // for (int i = 1; i <= v.size(); ++i) {
  //   pref2[i] = pref2[i - 1] + v[i - 1];
  // }
  // print(pref2);

  solve();  // return 0;

    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cout << "    time: " << duration.count() << " ms" << endl;

  return 0;
}