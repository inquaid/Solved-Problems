#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int zero = count(str.begin(), str.end(), '0');
        int one = count(str.begin(), str.end(), '1');
        if (zero == one)
        {
            cout << one - 1 << endl;
        }
        else
        {
            cout << min(zero, one) << endl;
        }
    }
}