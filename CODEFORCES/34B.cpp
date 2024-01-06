#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    sort(ary, ary + n);
    for (int i = 0; i < m; i++)
    {
        if (ary[i] < 0)
        {
            sum += ary[i];
        }
    }
    cout << abs(sum);
}