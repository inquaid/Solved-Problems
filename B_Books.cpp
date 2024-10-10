#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int res = -1;
    // int cnt = 0, temp = 0;
    int temp = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        while (temp + v[j] <= t and j < n)
        {
            temp += v[j];
            j++;
        }
        temp -= v[i];
        res = max(res, j - i);
    }
    cout << res << endl;
}

// 3 4 6 7