#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int strt = max(0, (n - m)), end = n + m, res = 0;
        bool if_is = true;
        int p = floor(log2(end));
        for (int i = p; i >= 0; i--)
        {
            if (if_is && ((strt >> i) & 1) != ((end >> i) & 1))
            {
                if_is = false;
            }
            if (if_is && ((strt >> i) & 1))
            {

                res += (1 << i);
            }
            else if (if_is == false)
            {
                res += (1 << i);
            }
        }
        cout << res << endl;
    }
}