#include <iostream>
using namespace std;
int main()
{
    int n, cnt = 1;
    cin >> n;
    int ary[2 * n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
        if (i > 0 && ary[i] != ary[i - 1])
        {
            cnt++;
        }
    }
    cout << cnt;
}