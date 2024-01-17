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
    string s, S;
    deque<char> ds;
    cin >> s;
    int size = s.size(), pos, c = 1;
    int t = s.find('a');
    int low = t - 1, high = t + 1;
    ds.push_front('a');
    for (char i = 'b';; i++)
    {

        if (low < 0 && high >= size)
        {

            break;
        }
        pos = s.find(i);
        if (s[low] == i && low >= 0)
        {

            ds.push_front(i);
            low--;
        }
        else if (s[high] == i && high < size)
        {

            ds.push_back(i);
            high++;
        }
        else
            break;
    }

    string str(ds.begin(), ds.end());

    set<char> ss(ds.begin(), ds.end());
    if (str == s && ss.size() == s.size())
    {

        cout << "YES\n";
    }
    else
        cout << "NO\n";
}