#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{
    ifstream fin("div7.in");
    ofstream fout("div7.out");
    
    int n;
    fin >> n;
    vector<int> a(n), prex;
    for (int i = 0; i < n; i++)
    {
        fin >> a[i];
        if (i == 0)
            prex.push_back(a[i]);
        else
            prex.push_back(prex[i - 1] + a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp_sum;
            if (i == 0)
                temp_sum = prex[j];
            else
                temp_sum = prex[j] - prex[i - 1];
            if (temp_sum % 7 == 0)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    fout << ans;
}