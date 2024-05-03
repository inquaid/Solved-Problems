#include <bits/stdc++.h>
using namespace std;

void solve();
int main()
{
    string s;
    cin >> s;
    int ln = s.size(), cnt = 0, present = 0;

    int pos = 0;

    if ((s.find("Danil") != string::npos))
    {
        present++;
        pos = s.find("Danil");
        if (s.find("Danil", pos + 1) == string::npos)
        {
            cnt++;
        }
    }

    if ((s.find("Olya", pos) != string::npos))
    {
        present++;

        pos = s.find("Olya");

        if (s.find("Olya", pos + 1) == string::npos)
        {
            cnt++;
        }
    }

    if ((s.find("Slava") != string::npos))
    {
        present++;

        pos = s.find("Slava");

        if (s.find("Slava", pos + 1) == string::npos)
        {
            cnt++;
        }
    }

    if ((s.find("Ann") != string::npos))
    {
        present++;

        pos = s.find("Ann");

        if (s.find("Ann", pos + 1) == string::npos)
        {
            cnt++;
        }
    }

    if ((s.find("Nikita") != string::npos))
    {
        present++;

        pos = s.find("Nikita");

        if (s.find("Nikita", pos + 1) == string::npos)
        {
            cnt++;
        }
    }
    if (cnt == 1 && present == 1)
        cout << "YES";
    else
        cout << "NO";
}
