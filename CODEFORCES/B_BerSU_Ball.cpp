#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int m;
    cin >> m;
    vector<int> b(m);
    for (auto &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0, i = 0, j = 0;

    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) < 2)
        {
            i++;
            j++;
            cnt++;
        }
        else if (a[i] > b[j])
            j++;
        else
            i++;
    }
    cout << cnt;
}