//again_

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ary(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }

        long long su = 0;
        vector<pair<long long, int>> dd(n + 1, make_pair(0, 1));
        dd[n] = make_pair(0, 1);

        for (int i = n - 1; i >= 0; i--)
        {
            long long total = dd[i + 1].first;
            int count = dd[i + 1].second;
            dd[i] = make_pair(total + ary[i], count);
            dd[i] = max(dd[i], make_pair(total + su + ary[i], count + 1));
            su += ary[i];
        }

        cout << dd[0].first << endl;
    }

    return 0;
}