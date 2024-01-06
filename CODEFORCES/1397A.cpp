#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int ary[26] = {0};
        for (int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                ary[s[i] - 'a']++;
            }
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (ary[i] % a != 0)
            {
                cnt++;
                break;
            }
        }

        (cnt == 0) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}