#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    set<int> st;
    while (q--)
    {
        int y, x;
        cin >> y >> x;
        switch (y)
        {
        case 1:
            st.insert(x);
            break;
        case 2:
            if (st.count(x) == 1)
                st.erase(x);
            break;

        default:
            if (st.count(x) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            break;
        }
    }
}