#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, cnt = 0, hour = 11;
        cin >> x >> y;
        int total_km = x * 10;
        while (x < y)
        {
            total_km += 100;
            x = total_km / hour;
            hour++;
            cnt++;
        }
        cout << cnt << endl;
    }
}