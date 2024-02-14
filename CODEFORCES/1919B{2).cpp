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
    int length, minus = 0, plus = 0;
    string input;
    cin >> length >> input;
    for (int i = 0; i < length; i++)
    {
        if (input[i] == '-')
        {
            minus++;
        }
        else
            plus++;

        if (plus > 0)
        {
            if (minus >= plus)
            {
                minus -= plus;
                plus = 0;
            }
            else
            {
                plus -= minus;
                minus = 0;
            }
        }
    }
    if (minus >= plus)
    {
        minus -= plus;
        plus = 0;
    }
    else
    {
        plus -= minus;
        minus = 0;
    }
    cout << (plus > minus ? plus : minus) << endl;
}