#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cin.ignore();
    string s;
    while (a--)
    {
        getline(cin, s);
        int cnt = count(s.begin(), s.end(), ' ');
        cout << "Count = " << cnt + 1 << endl;
    }
}