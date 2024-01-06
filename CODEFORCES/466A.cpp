#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (b >= m * a)
    {
        cout << n * a << endl;
    }
    else
    {

        int temp = n % m;
        int spec = (n - temp) / m * b;
        int reTemp = temp * a;
        int result = ((n - temp) / m * b) + b;
        int result2 = spec + reTemp;
        // cout<<result;
        cout << min(result, result2);
    }
}