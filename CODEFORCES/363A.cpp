#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void print(char temp)
{
    int n = temp - '0';

    if (n >= 5)
    {
        cout << "-O|";
        n -= 5;
    }
    else
    {
        cout << "O-|";
    }
    switch (n)
    {
    case 1:
        cout << "O-OOO";
        break;
    case 2:
        cout << "OO-OO";
        break;
    case 3:
        cout << "OOO-O";
        break;
    case 4:
        cout << "OOOO-";
        break;

    default:
        cout << "-OOOO";

        break;
    }
}

int main()
{
    flash;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        print(s[i]);
        cout << endl;
    }

    return 0;
}
