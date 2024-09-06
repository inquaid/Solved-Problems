#include <bits/stdc++.h>
using namespace std;
#define ln 200010
vector<int> diff(ln + 1, 0), pre_sum(ln + 1, 0);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q, min_length = ln + 1, mx_length = 0;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        min_length = min(min_length, l);
        mx_length = max(mx_length, r);
        diff[l]++;
        diff[r + 1]--;
    }
    for (int i = min_length; i <= mx_length; i++)
    {
        diff[i] += diff[i - 1];
        int cnt = diff[i] < k ? 0 : 1;

        pre_sum[i] = cnt + pre_sum[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;

        b = min(b, mx_length);

        cout << (a > mx_length ? 0 : pre_sum[b] - pre_sum[a - 1]) << endl;
    }
}