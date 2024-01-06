#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

    string str;
    cin >> str;
    int cnt = count_if(str.begin(), str.end(), [](char c)
                       { return c == 'a'; });
    int n = str.length();
    cout << min(n, (2 * cnt) - 1);
}
