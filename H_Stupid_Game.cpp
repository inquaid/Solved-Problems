#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 1, y = 0;
        cin >> n;
        n--;

        if (!(n & 1))
        {
            if (!(n / 2) & 1)
            {
                cout << "Beautiful game";
            }
            else
                cout << "Never playing this again";
        }
        else
        {

            cout << "No words";
        }
        cout << endl;
    }
}