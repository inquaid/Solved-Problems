#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        string s;
        cin >> n >> s;
        int result = 0;
        vector<bool> swapped(n, false);

        for (int i = 0; i < n - 1;)
        {
            if (s[i] == 'A' && s[i + 1] == 'B' && !swapped[i])
            {
                swap(s[i], s[i + 1]);
                swapped[i] = true;
                result++;
                i = max(0, i - 2);
            }
            else
            {
                i++;
            }
        }

        cout << result << endl;
    }
    return 0;
}
