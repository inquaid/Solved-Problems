#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
void solve()
{
    string first, second;
    cin >> first >> second;

    int j = second.size() - 1, cnt = 0;
    for (int i = first.size() - 1; i >= 0; i--)
    {
        if (first[i] == second[j])
        {
            j--;
            cnt++;
        }
        else
        {
            for (int k = 0; k < j; k++)
            {
                if (first[i] == second[k])
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    // cout << cnt << " ";
    if (cnt == second.size())
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}