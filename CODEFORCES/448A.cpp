#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double t = a + b + c;
    int x, y, z;
    cin >> x >> y >> z;
    double tt = x + y + z;
    int check;
    cin >> check;
    ((ceil(t / 5) + ceil(tt / 10)) <= check) ? cout << "YES" : cout << "NO";

    cout << endl;
}