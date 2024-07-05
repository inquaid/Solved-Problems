#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int q;
    cin >> q;
    deque<int> dq;
    while (q--)
    {
        int n;
        cin >> n;
        int d, x;
        switch (n)
        {
        case 0:
            cin >> d >> x;
            (d == 0) ? dq.push_front(x) : dq.push_back(x);

            break;
        case 1:
            int p;
            cin >> p;
            if (dq.empty() == false)
                cout << dq[p] << endl;
            break;

        default:
            // int d;
            cin >> d;
            if (dq.empty() == false)
                (d == 0) ? dq.pop_front() : dq.pop_back();
            break;
        }
    }
}