#include <iostream>
using namespace std;
int main()
{
    int a, even = 0, odd = 0, chk = 0;
    cin >> a;
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
        if (ary[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even > odd)
    {
        chk++;
    }
    for (int i = 0; i < a; i++)
    {
        if (chk == 0)
        {
            if (ary[i] % 2 == 0)
            {
                cout << i + 1;
                return 0;
            }
        }
        if (chk == 1)
        {
            if (ary[i] % 2 != 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
}