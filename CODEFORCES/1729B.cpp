#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        string str;
        // getline(cin,str);
        cin >> str;
        // cout<<str[0]<<endl;

        for (int i = 0; i < a; i++)
        {
            if (str[i + 3] == '0' && str[i + 2] == '0' && i + 3 < a)
            {
                int temp = str[i] - '0';
                char tempp = 97 + temp - 1;
                cout << tempp;
                temp = (str[i + 1] - '0') * 10 + (str[i + 2] - '0');
                tempp = 97 + temp - 1;
                cout << tempp;
                i += 3;
            }

            else if (str[i + 2] == '0' && i + 2 < a)
            {
                int temp = (str[i] - '0') * 10 + (str[i + 1] - '0');
                char tempp = 97 + temp - 1;
                cout << tempp;
                i += 2;
            }

            else
            {
                int temp = str[i] - '0';
                char tempp = 97 + temp - 1;
                cout << tempp;
            }
        }
        cout << endl;
    }
}