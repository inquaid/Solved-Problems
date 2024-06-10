#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int, int>> v;
void fill()
{
    // for (int i = 1; i <= 18; i++)
    {
        int nine = 0, five = 0;
        for (int j = 1; j <= 18; j++)
        {
            nine = nine * 10 + 9;
            five = five * 10 + 5;
            // cout << five << " " << nine + nine << endl;
            v.push_back(make_pair(five + five, nine + nine));
        }
    }
}

signed main()
{
    fill();
    // for (auto i : v)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        for (auto i : v)
        {
            if (n >= i.first && n <= i.second)
            {
                bool is = true;
                int temp = n - (i.first / 2);
                while (temp)
                {
                    if (temp % 10 < 5)
                    {
                        is = false;
                        break;
                    }
                    temp /= 10;
                }
                if (is)
                {
                    cout << "YES";
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO";
        }
        cout << endl;
    }
}