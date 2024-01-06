#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ary[a], cnt = 0, sum = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> ary[i];
        if (ary[i] > 0)
        {
            cnt += ary[i];
        }

        else if (cnt > 0 && ary[i] < 0)
        {
            if (cnt + ary[i] >= 0)
            {
                cnt += ary[i];
            }
            else
            {
                sum += abs(cnt + ary[i]);
                cnt = 0;
            }
        }
        else if (ary[i] < 0)
        {
            sum += abs(ary[i]);
        }
    }
    cout << sum;
}