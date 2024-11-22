#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    cin >> n;
    set<string> dataBase;
    map<string, int> mp;
    while (n--) {
        char c;
        string s;
        cin >> c >> s;

        if (c == 'a') {                               // Add
            if (dataBase.find(s) != dataBase.end()) { // found
                int i = mp[s] + 1;
                string newName = s + to_string(i);
                // while (binary_search(dataBase.begin(), dataBase.end(),
                //  newName) == true) {
                // while (dataBase.find(newName) != dataBase.end()) {
                while (mp[newName] == 1) {
                    i++;
                    newName = s + to_string(i);
                }
                // i++;
                // newName = s + to_string(i);
                dataBase.insert(newName);
                mp[s] = i;
                cout << newName << "\n";
            } else { // Not found
                dataBase.insert(s);
                mp[s] = 0;
                cout << "OK\n";
            }
        } else {                                      // Delete
            if (dataBase.find(s) != dataBase.end()) { // found
                dataBase.erase(s);
                mp[s] = -1;
                cout << "DELETED\n";
            } else { // Not dound
                cout << "INVALID\n";
            }
        }
    }
}
