#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pos(vector<ll> &a, ll k) {
  int cnt = 0;
  for (int i = 0; i < a.size() - 1; i+=2) {
    ll gap = a[i + 1] - a[i];
    if(gap > k) {
      if((a.size() % 2 != 0) and !cnt) {
        i--;
      //   // cout <<"HAHA";
      //   if(i != (a.size() - 2) and ceil(gap / 2.0) > k) {
      //     return 0;
        }
      //   i++;
      // } 
      // else {
      //   if(ceil(gap / 2.0) > k) {
      //     return 0;
      //   }
      // }
      cnt++;
    }
  }
  // if(cnt == 0)
  if(a.size() % 2 == 0) return cnt == 0;
  return cnt <= 1;
}

int main() {

  // vector<int> a = {1, 2, 3, 4, 5};
  // for (int i = 0; i < a.size() - 1; i++)
  // {
  //   cout << i << " ";
  // }
  // cout << a.size() << endl;
  // cout << a.size() - 2 << endl;
  int n; cin >> n;
  cout << n << endl;
  cerr << "hello\n";
  cout << "Bye\n";
  return 0;
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<ll> a(n);
    // cout << a.size() << endl;
    for(auto &i : a) cin >> i;
    ll l = 1, r = 1e18, ans = 1;
    while(l <= r) {
      ll m = l + (r - l) / 2;
      if(pos(a, m)) {
        r = m - 1; ans = m;
      } else l = m + 1;
    }
    cout << ans << endl;
  }

}