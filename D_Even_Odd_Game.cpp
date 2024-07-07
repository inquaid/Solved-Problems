#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int> pq;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            pq.push(temp);
        }
        int alice = 0, bob = 0;

        for (int i = 0; i < n; i++)
        {
            if ((i & 1) == false)
            {
                if ((pq.top() & 1) == false)
                    alice += pq.top();
            }
            else
            {
                if ((pq.top() & 1))
                    bob += pq.top();
            }

            pq.pop();
        }
        if (alice == bob)
            cout << "Tie\n";
        else if (alice > bob)
            cout
                << "Alice\n";
        else
            cout << "Bob\n";
    }
}