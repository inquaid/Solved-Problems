#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, od1 = 0, od2 = 0, ev1 = 0, ev2 = 0;
        cin >> a;
        int ary[a];
        for (int i = 0; i < a; i++)
        {
            cin >> ary[i];
            if (i % 2 == 0)
            {
                if (ary[i] % 2 == 0)
                {
                    ev1++;
                }
                else
                {
                    od1++;
                }
            }
            else
            {
                if (ary[i] % 2 == 0)
                {
                    ev2++;
                }
                else
                {
                    od2++;
                }
            }
        }
        // cout<<ev1<<endl<<od1<<endl<<ev2<<endl<<od2<<endl;
        if ((ev1 == 0 || od1 == 0) && (ev2 == 0 || od2 == 0))
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
}