#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int main()
{
    flash;

    int n, cnt = 1;
    bool ok = true;
    cin >> n;
    char matrix[n][n], check;
    set<char> st;
    st.empty();
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cin >> matrix[i][k];

            st.insert(matrix[i][k]);
            if (i == 0 && k == 0)
            {
                check = matrix[i][k];
            }
            else
            {
                if (matrix[i][k] == check)
                {
                    cnt++;
                }
            }
        }
    }
    check = matrix[0][0];
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][i] != check)
            ok = false;
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (matrix[i][j] != check)
            ok = false;
    }
    // cout << st.size() << " "<<cnt<<" ";
    if (ok && st.size() == 2 && cnt == (n + (n - 1)))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
