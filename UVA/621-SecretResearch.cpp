#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    // flash;
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
    string input;
    cin >> input;
    int len = input.size();
    if (input == "1" || input == "4" || input == "78")
    {
        cout << "+\n";
    }
    else if (input[len - 1] == '5' && input[len - 2] == '3')
    {
        cout << "-\n";
    }
    else if (input[len - 1] == '4' && input[0] == '9')
    {
        cout << "*\n";
    }
    else if (input[0] == '1' && input[1] == '9' && input[2] == '0')
    {
        cout << "?\n";
    }
    else
        cout << "+\n";
}