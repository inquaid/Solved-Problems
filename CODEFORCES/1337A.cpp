#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int h = c - b;
        cout << b << " " << b + h << " " << c << endl;
    }
}