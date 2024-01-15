#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        int d = static_cast<int>(min(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)),
                                     min(sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)),
                                         min(sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4)),
                                             sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4))))));

        cout << d * d << endl;
    }

    return 0;
}
