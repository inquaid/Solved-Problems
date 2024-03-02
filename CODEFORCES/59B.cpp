#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


bool isEven(int n)
{
    return (!(n & 1));
}

int main()
{
    flash;
    int n, odd = 0, even = 0, temp, odd_cnt = 0, min_odd = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (isEven(temp))
            even += temp;
        else
        {
            odd += temp;
            odd_cnt++;
            min_odd = min(min_odd, temp);
        }
    }
    if (odd == 0)
        cout << 0;
    else
    {

        if (isEven(odd))
        {
            cout << odd + even - min_odd;
        }
        else
            cout << odd + even;
    }

    cout << endl;
    return 0;
}