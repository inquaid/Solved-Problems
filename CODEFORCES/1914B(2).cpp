#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, k, temp = 1, last;
    cin >> n >> k;
    last = n - 1;
    temp = n;
    deque<int> qq;

    for (int i = 0; i < n; i++)
    {
        if (i <= k)
        {
            qq.push_front(temp--);
        }
        else
            qq.push_back(temp--);
    }
    deque<int>::iterator it;
    for (it = qq.begin(); it != qq.end(); it++)
    {
        cout << (*it) << " ";
    }

    cout << endl;
}