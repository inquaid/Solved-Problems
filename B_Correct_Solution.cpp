#include <bits/stdc++.h>
using namespace std;
#define WA "WRONG_ANSWER\n"
#define AC "OK\n"

int main()
{
    string bob, alice;
    cin >> bob >> alice;

    // sort(alice.begin(), alice.end());
    // cout<<alice<<endl;
    // return 0;
    if (alice[0] == '0')
    {
        if (alice == bob)
        {
            cout << AC;
            return 0;
        }
        cout << WA;
        return 0;
    }
    sort(bob.begin(), bob.end());
    int i = 0;
    while (bob[i] == '0')
    {

        i++;
    }
    swap(bob[0], bob[i]);
    // cout<<"as";

    cout << (bob == alice ? AC : WA);
}