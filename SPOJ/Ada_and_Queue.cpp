#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    map<string, int> mp;
    mp["back"] = 0;
    mp["front"] = 1;
    mp["reverse"] = 2;
    mp["push_back"] = 3;
    mp["toFront"] = 4;
    deque<int> dq;
    int n;
    bool flag = true;
    while (q--)
    {
        string s;
        cin >> s;
        switch (mp[s])
        {
        case 0:
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
            {
                if (flag)
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
            break;
        case 1:
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
            {
                if (flag)
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }

            break;

        case 2:
            // reverse(dq.begin(), dq.end());
            flag = !flag;
            break;

        case 3:
            cin >> n;
            if (flag)
                dq.push_back(n);
            else
                dq.push_front(n);

            break;

        default:
            cin >> n;
            if (flag)
                dq.push_front(n);
            else
                dq.push_back(n);
            break;
        }
    }
}