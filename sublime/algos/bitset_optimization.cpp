#include <bits/stdc++.h>
using namespace std;

#define MAXSUM 10

void preprocess(bitset<MAXSUM> &bit, vector<int> v, int n) {
  bit.reset();
  // cout << bit;
  bit[0] = 1;
  for (int i = 0; i < n; ++i) {
    bit |= (bit << v[i]);
  }
}

int main() {

  bitset<MAXSUM> bit;
  vector<int> v = {1, 3, 5};
  preprocess(bit, v, v.size());

  int x = 8;
  if(bit[x]) {
    cout << "OK\n";
  } else {
    cout << "NO\n";
  }

}