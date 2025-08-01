#include <iostream>
#include <cassert>
#include <chrono>
#include <random>
#include <algorithm>

using namespace std;
#define int long long
const int N = 20, max_t = 3, max_n = 5, max_val = 100;

// NEVER use rand() function because rand() will always generate same random values even if you run the same code multiple times
mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count()); // using current time as seed, so it will always generate different random values if you run this code multiple times
long long get_rand(long long l, long long r) { // random number from l to r
  assert(l <= r);
  return l + rnd() % (r - l + 1);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout << 1 << endl;
  int n = get_rand(1, max_n);
  cout << n << endl;
  for (int i = 0; i < n; ++i) {
    int val = get_rand(1, n);
    cout << val << " ";
  } cout << endl;
  // for (int i = 0; i < n; ++i) {
  //   int val = get_rand(1, max_val);
  //   cout << val << " ";
  // } cout << endl;
  return 0;
}
