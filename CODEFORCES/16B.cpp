#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    flash;
    
    int a, b, n, x;

    map<int, int, greater<int>> mp;

    cin >> n >> x;
    while (x--)
    {
        cin >> a >> b;
        mp[b] += a;
    }
    int cnt = n, sum = 0;

    for (auto i : mp)
    {

        if (i.second >= cnt)
        {
            sum += (i.first * cnt);
            break;
        }
        else
        {
            sum += (i.first * i.second);
            cnt -= i.second;
        }
    }
    cout << sum;
}