#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int ary[t];
    int max = INT_MIN, position = 0;
    for (int i = 0; i < t; i++)
    {
        int temp, temp1, temp2, temp3, sum;
        cin >> temp >> temp1 >> temp2 >> temp3;
        sum = temp + temp1 + temp2 + temp3;
        ary[i] = sum;
        if (i == 0)
        {
            position = sum;
        }
    }
    sort(ary, ary + t, greater<int>());
    for (int i = 0; i < t; i++)
    {
        if (ary[i] == position)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    // cout << ++position << endl;
}