#include <bits/stdc++.h>
using namespace std;

void rec(deque<int> &dq)
{
    if (dq.front() >= dq.back())
        return;
    int temp = dq.front();
    dq.pop_front();
    rec(dq);
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (auto &i : dq)
            cin >> i;
        while (is_sorted(dq.begin(), dq.end()) == false)
        {
            if (dq.front() >= dq.back())
            {
                int f = dq.front(), e = dq.back();
                dq.pop_front();
                dq.pop_back();
                dq.push_front(e);
                dq.push_back(f);
            }
            else
            {
            }
        }
        // cout << dq.front() << endl;
    }
}