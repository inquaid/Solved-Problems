#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long maxScore = 0;
        int pairs = n / 2;
        maxScore = pairs * 13LL;

        if (n % 2 == 1)
        {
            maxScore += 6;
        }

        cout << maxScore << endl;
    }
    return 0;
}
