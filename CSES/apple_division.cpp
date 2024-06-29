#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &i : v)cin >> i;
	int res = INT_MAX;
	for (int i = 0; i < (1 << n); ++i)
	{
		int grp1 = 0, grp2 = 0;
		for (int j = 0; j < n; ++j)
		{
			if ( (i >> j) & 1) {
				grp1 += v[j];
			}
			else grp2 += v[j];
		}
		res = min(res, abs(grp1 - grp2));
	}
	cout << res;
}