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
    string input;
    cin >> input;
    int length = input.size();
    for (int i = 0; i < length; i++)
    {
        if (input[i] == '.')
        {
            cout << 0;
        }
        else if (input[i] == '-' && input[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else
        {
            cout << 2;
            i++;
        }
    }

    return 0;
}
