#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string num;
        cin >> n >> num;
        string s = "", ss = "";
        bool yes = true;
        for (int i = 0; i < n; i++)
        {
            if (num[i] == '2')
            {

                if (yes)
                {
                    s += '1';
                    ss += '1';
                }
                else
                {
                    s += '2';
                    ss += '0';
                }
            }
            else if (num[i] == '1')
            {
                if (yes)
                {
                    s += '0';
                    ss += '1';
                    yes = false;
                }
                else
                {
                    s += '1';
                    ss += '0';
                }
            }
            else
            {
                s += '0';
                ss += '0';
            }
        }

        cout << s << endl
             << ss << endl;
    }
}