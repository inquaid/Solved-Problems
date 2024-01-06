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
 
        int x = n / 2020;
 
        if (n % 2020 == 0 || n % 2021 == 0 || (x >= 1 && n % 2020 <= x && n >= 2020 * x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}