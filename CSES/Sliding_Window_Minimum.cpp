#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    vector<pair<int, int>> vmp(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vmp[i] = {i, temp};
        v[i] = temp;
    }

    int res = v[0];
    deque<pair<int, int>> results;

    for (int i = 0; i < k; i++)
    {

        while (results.empty() == false and results.back().second > vmp[i].second)
        {
            results.pop_back();
        }
        results.push_back(vmp[i]);
    }

    cout << results.front().second << " ";

    int i = 0, j = k;

    for (int i = k; i < n; i++)
    {

        if (results.empty() == false and results.front().first <= (i - k))
        {
            results.pop_front();
        }

        while (results.empty() == false and results.back().second > vmp[i].second)
        {
            results.pop_back();
        }
        results.push_back(vmp[i]);

        cout << results.front().second << " ";
    }
}