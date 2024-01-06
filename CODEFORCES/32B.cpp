#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    // getline(cin, str);
    cin >> str;
    // cout<<str;
    int n = str.length();
    // cout<<n;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
        else
        {
            cout << 0;
        }
    }
    // cout<<str[0];
}