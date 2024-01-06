#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    flash;

    int t;
    cin >> t;
    while (t--)
    {
        int n, h = 1;
        cin >> n;
        vector<int> ary(n);
        for (auto &i : ary)
        {
            cin >> i;
        }
        for (int i = 0; i < n; i++)
        {
            if (ary[i] == 1 && ary[i - 1] == 1 && i != 0)
            {
                h += 5;
            }
            else if (ary[i] == 1)
            {
                h++;
            }
            else if (ary[i] == 0 && ary[i - 1] == 0 && i != 0)
            {
                h = -1;
                break;
            }
            else
                continue;
        }
        cout << h << endl;
    }
}