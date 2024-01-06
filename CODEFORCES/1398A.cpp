#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int ary[a];
        for (int i = 0; i < a; i++)
        {
            cin >> ary[i];
        }
        if ((ary[0] + ary[1]) <= ary[a - 1])
        {
            cout << "1 2 " << a << endl;
        }
        else
            cout << -1 << endl;
    }
}