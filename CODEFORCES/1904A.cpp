#include <bits/stdc++.h>
using namespace std;

bool posi(int x, int y, int xN, int yN, int a, int b)
{
    return (abs(x - xN) == a && abs(y - yN) == b) || (abs(x - xN) == b && abs(y - yN) == a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        vector<pair<int, int>> mv = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pair<int, int>> res;

        for (auto &move : mv)
        {
            int xN = xK + move.first;
            int yN = yK + move.second;
            if (posi(xQ, yQ, xN, yN, a, b))
            {
                res.insert({xN, yN});
            }
        }

        for (auto &move : mv)
        {
            int xN = xQ + move.first;
            int yN = yQ + move.second;
            if (posi(xK, yK, xN, yN, a, b))
            {
                res.insert({xN, yN});
            }
        }

        cout << res.size() << endl;
    }
    return 0;
}