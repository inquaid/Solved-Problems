#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());

    int cnt = 1, res = 1, i = 0, j = 1;
    while (j < n)
    {
        if ((v[j] - v[i]) < 6)
        {
            cnt = abs(j - i) + 1;
            j++;
        }
        else
        {
            res = max(res, cnt);
            cnt = 0;
            i++;
        }
    }
    v.clear();
    res = max(res, cnt);
    cout << res;
}
