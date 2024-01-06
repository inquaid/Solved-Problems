#include <bits/stdc++.h>
using namespace std;

int myAry(int x);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, max = 0, min = INT_MAX, cnt = 0, i;
    cin >> a;
    int temp;
    for (i = 0; i < a; i++)
    {
        cin >> temp;
        if (temp > max || temp < min)
        {
            cnt++;
        }

        if (temp > max)
        {
            max = temp;
        }

        if (temp < min)
        {
            min = temp;
        }
    }

    cout << cnt - 1;
}