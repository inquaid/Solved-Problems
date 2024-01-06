#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long n;
        cin >> n;
        
        ((n & (n-1)) ) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}