#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        int a, cnt = 0, c = 0;
        cin >> a;
        vector<int> ary(a);
        for (auto &i : ary)
        {
            cin >> i;
        }
        for (int i = 1; i <= a; i++)
        {
            if (i == ary[i - 1])
            {
                cnt++;
            }
        }
        cout << (cnt % 2 == 0 ? cnt / 2 : cnt / 2 + 1) << endl;
    }
}