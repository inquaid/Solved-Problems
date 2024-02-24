#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    // flash;
    int n;
    cin >> n;
    cout << "(";
    int temp = n;
    for (int i = 1; i <= n; i++)
    {
        cout << "(";
        for (int j = 1; j <= i; j++)
        {
            printf("sin(%d)", i);
            if (j % 2 == 0)
            {
                cout << "-";
            }
            else
                cout << "+";

            printf("%d)", temp--);
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ")";
        }
    }

    cout << "+1";

    return 0;
}
