#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    unordered_map<string, int> database;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (database.find(str) == database.end())
        {
            cout << "OK" << endl;
            database[str] = 1;
        }
        else
        {
            cout << str << database[str] << endl;
            database[str]++;
        }
    }
    return 0;
}
