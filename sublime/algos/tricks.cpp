#include <bits/stdc++.h>
using namespace std;

int flip_bits_lower_than_msb(int n) {
	int k = ceil(log2(n));
	return ((1ll<<k) - 1) ^ n;
}

int nth_arithmetic_increasing_seq(int n) {
	// 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5
  int m = floor((sqrt(8*n+1) - 1) / 2.0);
  return n - m*(m+1)/2 + 1;
}

int main() {
	int n = 692;
	bitset<10> bst;
	bst = n;
	cout << bst << "\n";
	bst = flip_bits_lower_than_msb(n);
	cout << bst << " ";

}