#include <bits/stdc++.h>
using namespace std;

void combinations(vector<int> &arr, int r) {
  int n = arr.size();
  vector<bool> select(n, false);
  fill(select.end() - r, select.end(), true);

  do {
    for (int i = 0; i < n; ++i) {
      if(select[i]) cout << arr[i] << " ";
    } cout << "\n";
  } while(next_permutation(select.begin(), select.end()));
}

void permutations(vector<int> &arr, int r) {
  int n = arr.size();
  vector<int> idx(n);
  iota(idx.begin(), idx.end(), 0);
  vector<bool> select(n, false);
  fill(select.end() - r, select.end(), true);

  do {
    vector<int> chosen;
    for (int i = 0; i < n; ++i) {
      if(select[i]) chosen.push_back(idx[i]);
    }
    sort(chosen.begin(), chosen.end());
    do {
      for(auto j : chosen) cout << arr[j] << " ";
      cout << "\n";
    } while(next_permutation(chosen.begin(), chosen.end()));
  } while(next_permutation(select.begin(), select.end()));
}

int main() {
  vector<int> arr = {7, 8};
  int r = 2;

  cout << "Combinations (nCr):\n";
  combinations(arr, r);

  cout << "\nPermutations (nPr):\n";
  permutations(arr, r);
}