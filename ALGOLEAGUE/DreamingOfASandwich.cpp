// Your C++ code goes here
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s, temp;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        s.push_back(str);
    }
    int i = 0, j;
    while (i < s.size()) {

        for (j = 0; j < k and (i) < s.size(); ++j) {
            cout << s[i] << endl;
            i++;
        }
        s.push_back(s[i]);
        i++;
    }
}