#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (auto &i : v)
            cin >> i;

        long long fmin, smin, re = 0;
        fmin = smin = 1e9;

        for (auto it : v)
        {
            if (fmin > smin)
            {
                swap(fmin, smin);
            }
            if (it <= fmin)
            {
                fmin = it;
            }
            else if (it <= smin)
            {
                smin = it;
            }
            else
            {
                fmin = it;
                re++;
            }
        }

        cout << re << endl;
    }

    return 0;
}