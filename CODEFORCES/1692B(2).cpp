#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, temp;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    cout << ((n - st.size()) % 2 == 0 ? st.size() : st.size() - 1) << endl;
}