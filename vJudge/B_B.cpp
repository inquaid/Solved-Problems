#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    string str[r];
    for (int i = 0; i < r; i++)
    {
        string temp = "#", input;
        cin >> input;
        temp += input;
        temp += "#";
        str[i] = temp;
    }
    for (int i = 0; i < c + 2; i++)
    {
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        cout << str[i] << endl;
    }
    for (int i = 0; i < c + 2; i++)
    {
        cout << "#";
    }
}