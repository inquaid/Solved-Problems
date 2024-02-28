#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();
string findMainUnit(const string &input)
{
    int length = input.length();

    // Iterate over possible lengths of the main unit.
    for (int unitLength = 1; unitLength <= length / 2; ++unitLength)
    {
        if (length % unitLength == 0)
        { // The main unit can only form the string if its length divides evenly into the length of the string.
            string unit = input.substr(0, unitLength);
            string repeated;
            for (int j = 0; j < length / unitLength; ++j)
            {
                repeated += unit;
            }
            if (repeated == input)
            {
                return unit; // Found the main unit that forms the input string when repeated.
            }
        }
    }

    return input; // If no repeating unit is found, return the original string.
}
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
    string temp, temp2, first, second;
    cin >> temp >> temp2;
    if (temp > temp2)
    {
        first = temp;
        second = temp2;
    }
    else
    {
        first = temp2;
        second = temp;
    }

    // cout << findMainUnit(first) << endl;
    temp = findMainUnit(first);
    temp2 = findMainUnit(second);
    if (temp != temp2)
    {
        cout << -1 << endl;
        return;
    }

    int times = lcm(first.size(), second.size());
    for (int i = 0; i < times / temp2.size(); i++)
    {
        cout << temp2;
    }

    cout << endl;
}