#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

	int n, temp;
	cin >> n;
	std::vector<int> v(n), res, pos(n);
	vector<pair<int, int>> vpr;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		vpr.push_back(make_pair(temp, i + 1));
	}

	stack<pair<int, int>> st;

	for (int i = 0; i < n; ++i)
	{
		while (st.empty() == false && vpr[i].first <= st.top().first)
			st.pop();
		if (st.empty())
			cout << 0 << " ";
		else
			cout << st.top().second << " ";

		st.push(vpr[i]);
	}


}