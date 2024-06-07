#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int start_parity = (x1 + y1) % 2;
        int end_parity = (x2 + y2) % 2;

        if (start_parity == end_parity)
        {
            cout << "Potato";
        }
        else
        {
            cout << "Monke";
        }
        cout << endl;
    }

 
}