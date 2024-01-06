#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int B = 0, b = 0;
        vector<bool> toErase(s.size(), false);

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                B++;
                toErase[i] = true;
            }
            else if (B > 0 && isupper(s[i]))
            {
                toErase[i] = true;
                B--;
            }

            if (s[i] == 'b')
            {
                b++;
                toErase[i] = true;
            }
            else if (b > 0 && islower(s[i]))
            {
                toErase[i] = true;
                b--;
            }
        }

        string result;
        for (int i = 0; i < s.size(); i++)
        {
            if (!toErase[i])
            {
                result += s[i];
            }
        }

        cout << result << endl;
    }
    return 0;
}
