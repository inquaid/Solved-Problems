#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans(n, -1);
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        while (dq.empty() == false and dq.back().first < temp)
        {
            ans[dq.back().second] = temp;
            dq.pop_back();
        }
        dq.push_back({temp, i});
    }

    for (auto i : ans)
        cout << i << " ";
}