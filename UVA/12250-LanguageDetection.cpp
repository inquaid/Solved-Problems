#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int main()
{
    flash;
    string s;
    int i = 0;
    while (true)
    {
        cin >> s;
        if (s == "#")
        {
            break;
        }
        if (s == "HELLO")
        {
            printf("Case %d: ENGLISH\n", ++i);
        }
        else if (s == "HOLA")
        {
            printf("Case %d: SPANISH\n", ++i);
        }
        else if (s == "HALLO")
        {
            printf("Case %d: GERMAN\n", ++i);
        }
        else if (s == "BONJOUR")
        {
            printf("Case %d: FRENCH\n", ++i);
        }
        else if (s == "CIAO")
        {
            printf("Case %d: ITALIAN\n", ++i);
        }
        else if (s == "ZDRAVSTVUJTE")
        {
            printf("Case %d: RUSSIAN\n", ++i);
        }
        else
        {
            printf("Case %d: UNKNOWN\n", ++i);
        }
    }

    return 0;
}
