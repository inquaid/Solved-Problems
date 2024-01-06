#include <bits/stdc++.h>
using namespace std;

void fun()
{
    set<char> s;
    for (int i = 0; i < 3; i++)
    {
        char temp;
        cin >> temp;
        s.insert(temp);
    }
    if (s.find('?') != s.end())
    {
        string abc = "ABC";
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            abc.erase(remove(abc.begin(), abc.end(), *it), abc.end());
        }
        cout << abc << endl;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        char ss;
        for (int i = 0; i < 3; i++)
        {
            fun();
        }
    }

    return 0;
}
