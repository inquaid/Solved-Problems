#include <iostream>
#include <string>
using namespace std;

void swapp(string &ary, int strt, int end)
{

    for (int i = end + 1; i > strt; i--)
    {
        ary[i] = ary[i - 1];
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, d, r = 0;
        cin >> n >> d;

        string str;
        cin >> str;
        // cout<<str;
        for (int i = 0; i < n; i++)
        {
            if ((str[i] - '0') < d && r == 0 && d != 0)
            {
                cout << d;
                r++;
                i--;
            }
            else
            {
                cout << str[i];
            }
        }
        if (r == 0)
        {
            cout << d;
        }
        cout << endl;
    }
}
