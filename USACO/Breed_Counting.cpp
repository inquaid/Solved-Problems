#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("bcount.in");
    ofstream fout("bcount.out");

    int n, q;
    fin >> n >> q;

    vector<int> h(n), g(n), j(n);

    for (int i = 0; i < n; i++)
    {
        int temp;
        fin >> temp;
        if (temp == 1)
            h[i]++;
        else if (temp == 2)
            g[i]++;
        else if (temp == 3)
            j[i]++;
    }

    vector<int> prex_sum_h(n), prex_sum_g(n), prex_sum_j(n);

    prex_sum_h[0] = h[0];
    prex_sum_g[0] = g[0];
    prex_sum_j[0] = j[0];

    for (int i = 1; i < n; i++)
    {
        prex_sum_h[i] = prex_sum_h[i - 1] + h[i];
        prex_sum_g[i] = prex_sum_g[i - 1] + g[i];
        prex_sum_j[i] = prex_sum_j[i - 1] + j[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        fin >> l >> r;
        l--;
        r--;

        int h_count, g_count, j_count;

        if (l == 0)
        {
            h_count = prex_sum_h[r];
            g_count = prex_sum_g[r];
            j_count = prex_sum_j[r];
        }
        else
        {
            h_count = prex_sum_h[r] - prex_sum_h[l - 1];
            g_count = prex_sum_g[r] - prex_sum_g[l - 1];
            j_count = prex_sum_j[r] - prex_sum_j[l - 1];
        }

        fout << h_count << " " << g_count << " " << j_count << endl;
    }

    fin.close();
    fout.close();

    return 0;
}
