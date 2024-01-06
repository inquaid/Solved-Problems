#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a < 0)
    {
        a = abs(a);
        int p = a % 10;
        int pp = (a / 10) % 10;
        a = (p > pp) ? (a - p) / 10 : ((a - (10 * pp)) / 10) + p;
        if (a != 0)
        {
            a = -a;
        }
        //   cout<<p<<" " <<pp<<endl;
    }
    cout << a << endl;
}