#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int target;
    cin >> target;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == target or b == target)
        {
            if (a == target)
            {
                target = b;
            }
            else
            {
                target = a;
            }
        }
    }
    cout << target;
}