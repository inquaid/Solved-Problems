#include <bits/stdc++.h>
using namespace std;

int myAry(int x);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int temp;
        cin >> temp;
        cout << myAry(temp) << endl;
    }
}

int myAry(int x)
{
    int ary[1000], k = 0;

    for (int i = 0; i <= 1000; i++, k++)
    {
        while (k % 3 == 0 || k % 10 == 3)
        {
            k++;
        }
        ary[i] = k;
    }
    return ary[x - 1];
}