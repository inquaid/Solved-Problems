#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    flash;
    int n;
    set<int> st;
    cin >> n;
    if (n < 10)
    {
        cout << 9;
        return 0;
    }
    n += 1;
    for (int i = 0; i < 1000; i++)
    {
        while (n % 10 == 0)
        {
            n /= 10;
        }
        st.insert(n);
        n += 1;
    }

    cout << st.size() + 1;
    return 0;
}
