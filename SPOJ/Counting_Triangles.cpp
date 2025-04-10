#include <iostream>
using namespace std;
#define int long long
void tTestCase(int t) {
  int n = t;  
  cin >> n;
  int temp = (n * (n + 2) * ((2*n)+1)) / 8;
  cout << temp << "\n";
}
void solve() {
  int t; cin >> t;
  for(int i = 1; i <= t; i++) {
    tTestCase(i);
  }
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();  return 0;
}