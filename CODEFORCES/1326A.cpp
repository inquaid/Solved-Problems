#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a, b = 0, n = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        int j = 9;
        if (a == 1)
        {
            cout << -1;
        }

        else
        {
            cout << 2;
            for (int i = 0; i < a - 1; i++)
            {
                cout << 3;
            }
        }
        cout << endl;
    }
}