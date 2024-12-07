#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    string res = "";
    deque<char> dq;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            if (dq.empty() == false)
                dq.pop_back();
        } else
            dq.push_back(s[i]);
    }
    while (dq.empty() == false) {
        cout << dq.front();
        dq.pop_front();
    }
}