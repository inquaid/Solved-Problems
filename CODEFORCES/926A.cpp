#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long l, r, re = 0;
    cin >> l >> r;
    long long tw = 1, th;
    while (tw <= r)
    {
        th = 1;
        while (tw * th <= r)
        {
            if (tw * th >= l)
            {
                re++;
            }
            th *= 3;
        }
        tw *= 2;
    }
    cout << re;
}