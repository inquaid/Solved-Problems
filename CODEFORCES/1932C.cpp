#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define int long long
void solve();

signed main()
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
    int n, m, multiple = 1, temp;
    cin >> n >> m;
    vector<int> first_take(n);

    for (int i = 0; i < n; i++)
    {
        cin >> first_take[i];
    }

    string command;
    cin >> command;
    int start = 0, end = n - 1;
    vector<int> retake;
    for (int i = 0; i < n; i++)
    {
        if (command[i] == 'L')
        {
            retake.push_back(first_take[start++]);
        }
        else
            retake.push_back(first_take[end--]);
    }

    reverse(retake.begin(), retake.end());

    vector<int> result(n);
    temp = retake[0] % m;
    result[0] = temp;
    for (int i = 1; i < n; i++)
    {
        temp = temp % m * retake[i] % m;

        result[i] = temp;
    }

    reverse(result.begin(), result.end());
    for (auto i : result)
    {
        cout << i << " ";
    }

    cout << endl;
}