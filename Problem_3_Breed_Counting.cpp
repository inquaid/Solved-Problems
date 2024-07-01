#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int temp;
    vector<int> h, g, j;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            h.push_back(1);
            g.push_back(0);
            j.push_back(0);
        }
        else if (temp == 2)
        {
            h.push_back(0);
            g.push_back(1);
            j.push_back(0);
        }
        else
        {
            h.push_back(0);
            g.push_back(0);
            j.push_back(1);
        }
    }
    vector<int> prex_sum_h, prex_sum_g, prex_sum_j;

    prex_sum_h.push_back(h[0]);

    prex_sum_g.push_back(g[0]);

    prex_sum_j.push_back(j[0]);

    for (int i = 1; i < n; i++)
    {
        prex_sum_h[i] = prex_sum_h[i - 1] + h[i];
        prex_sum_g[i] = prex_sum_g[i - 1] + g[i];
        prex_sum_j[i] = prex_sum_j[i - 1] + j[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            int h_count = prex_sum_h[r];
            int g_count = prex_sum_g[r];
            int j_count = prex_sum_j[r];
            cout << h_count << " " << g_count << " " << j_count << endl;
        }
        else
        {
            int h_count = prex_sum_h[r] - prex_sum_h[l - 1];
            int g_count = prex_sum_g[r] - prex_sum_g[l - 1];
            int j_count = prex_sum_j[r] - prex_sum_j[l - 1];
            cout << h_count << " " << g_count << " " << j_count << endl;
        }
    }
}