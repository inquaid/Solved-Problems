#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        long long ary[a], arr[a];
        for (long long i = 0; i < a; i++)
        {
            cin >> ary[i];
        }

        for (long long i = 0; i < a; i++)
        {
            cin >> arr[i];

            if (arr[i] > ary[i])
            {
                long long temp = arr[i];
                arr[i] = ary[i];
                ary[i] = temp;
            }
        }
        auto max = *max_element(ary, ary + a);

        auto maxxx = *max_element(arr, arr + a);

        cout << max * maxxx << endl;
    }
}