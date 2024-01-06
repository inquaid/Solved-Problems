#include <iostream>
#include <string>
using namespace std;

int count(string str, string checker, int size, int sizer)
{
    if ( sizer == 0)
        return 1;

    if (size == 0)
        return 0;

    if (str[size - 1] == checker[sizer - 1])
        return count(str, checker, size - 1, sizer - 1) +
               count(str, checker, size - 1, sizer);
    else
        return count(str, checker, size - 1, sizer);
}


int main()
{
    string str, checker;
    cin >> str;
    checker = "QAQ";
    cout << count(str, checker, str.size(), checker.size()) << endl;
}