#include <bits/stdc++.h>
using namespace std;

bool if_is(int n)
{

    return (n <= 0) ? false : !(n & (n - 1));
}

int main()
{
    for (int i = 0; i < 2500; i++)
    {
        if (!if_is(i))
            cout << i << " ";
    }
}