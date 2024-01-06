#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, one = 0, two = 0, three = 0, four = 0, temp;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            one++;
        }
        if (temp == 2)
        {
            two++;
        }
        if (temp == 3)
        {
            three++;
        }
        if (temp == 4)
        {
            four++;
        }
    }
    if (one <= three)
    {
        one = 0;
    }
    else
    {
        one -= three;
    }
    if (two % 2 == 0)
    {
        two /= 2;
    }
    else
    {
        two /= 2;
        two++;
        if (one >= 2)
        {
            one -= 2;
        }
        if (one == 1)
        {
            one--;
        }
    }
    if (one >= 4)
    {
        if (one % 4 == 0)
        {
            one /= 4;
        }
        else
        {
            one /= 4;
            one++;
        }
    }
    else if (one < 4 && one > 0)
    {
        one = 1;
    }
    else
    {
        one = 0;
    }
    int result = four + three + one + two;
    cout << result;
}