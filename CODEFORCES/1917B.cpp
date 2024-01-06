#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        {
            long long n;
            cin >> n;
            string s;
            cin >> s;
            set<char> S;
            long long cnt = 0;
            for (auto i : s)
            {
                S.insert(i);
                cnt += S.size();
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
