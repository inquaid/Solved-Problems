#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    while (n--)
    {
        long long int a, re = 0;
        cin >> a;
        long long int ary[a];
        for (long long int i = 0; i < a; i++)
        {
            cin >> ary[i];
        }
        sort(ary, ary + a);
        for (long long int i = 0; i < a - 2; i++)
        {

            if (ary[i] == ary[i + 1] && ary[i + 1] == ary[i + 2])
            {
                cout << ary[i] << endl;
                re++;
                break;
            }
        }
        if (re == 0)
        {
            cout << "-1\n";
        }
    }
    return 0;
}