#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i < k)
        {
            sum += h[i];
        }
    }
    int res = 0, check = sum;
    for (int i = k; i < n; i++)
    {
        sum -= h[i - k];
        sum += h[i];
        if (sum < check)
        {
            check = sum;
            res = i - k + 1;
        }
    }
    cout << res + 1 << endl;
}