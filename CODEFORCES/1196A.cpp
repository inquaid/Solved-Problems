#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long a, b, c;
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << endl;
    }
}