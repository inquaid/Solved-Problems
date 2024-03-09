#include <bits/stdc++.h>
using namespace std;
int times = 0;
int binarysearch(int *ary, int value, int high, int low)
{
    times++;
    int midvalue = (high + low) / 2;
    if (value < ary[0])
        return ary[0];
    else if (high < low)
        return -1;
    else if (ary[midvalue] == value)
    {
        return ary[midvalue];
    }
    else if ((ary[midvalue] < value && ary[midvalue + 1] > value))
    {
        return ary[midvalue + 1];
    }
    else if (value > ary[midvalue])
    {

        return binarysearch(ary, value, high, midvalue + 1);
    }
    else
    {
        return binarysearch(ary, value, midvalue - 1, low);
    }
}

signed main()
{
    int ary[] = {10, 25, 33, 54, 43, 57, 37, 48, 59, 410};
    int n;
    cin >> n;
    cout << binarysearch(ary, n, 9, 0) << endl;

    return 0;
}

