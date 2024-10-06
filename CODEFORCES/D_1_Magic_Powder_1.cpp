#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
bool check(vi a, vi b, int guessed_count, int k)
{
    int n = a.size(), cnt = 0, magicPowder = 0;
    for (int i = 0; i < n; i++)
    {
        int newA = a[i] * guessed_count;
        if (newA > b[i])
        {
            magicPowder += (newA - b[i]);
        }
    }
    return magicPowder <= k;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int l = 0, r = 2000, res = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(a, b, mid, k))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << res;
}