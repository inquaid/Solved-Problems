#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    std::vector<int> v(n);
    for(auto &i : v) cin >> i;
    if(v[0] == 1 or v[n-1] == 1) {
      cout << "Alice\n";
    } else {
      cout << "Bob\n";
    }
  }
}