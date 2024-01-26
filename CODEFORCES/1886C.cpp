#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
using namespace std;

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
    string input;
    int pos, length;
    cin >> input >> pos;
    --pos;
    length = input.size();
    vector<char> store;
    bool GreaterPos = pos < length;
    input += '#';
    for (auto c : input)
    {

        while (!GreaterPos && !store.empty() && store.back() > c)
        {
            pos -= length--;
            store.pop_back();
            if (pos < length)
            {
                GreaterPos = true;
            }
        }

        store.push_back(c);
    }

    cout << store[pos];
}