#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    sort(ary, ary + n);
    int max = 2 * (ary[0] - 0);
    for (int i = 0; i < n - 1; i++)
    {
        if ((ary[i + 1] - ary[i]) > max)
        {
            max = (ary[i + 1] - ary[i]);
        }
    }
    if ((2 * (l - ary[n - 1])) > max)
    {
        max = 2 * (l - ary[n - 1]);
    }

    cout << fixed << setprecision(10) << (double)max / 2;
}