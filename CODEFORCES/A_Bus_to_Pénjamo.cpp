#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, r;
        cin >> n >> r;
        int happy = 0, unhappy = 0;
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            if (temp & 1) {
                unhappy++;
                happy += temp - 1;
            } else
                happy += temp;
        }
        int remainingSeat = (r - (happy / 2));
        if (unhappy <= remainingSeat)
            happy += unhappy;
        else {
            happy += ((remainingSeat * 2) % (unhappy));
        }
        cout << happy << endl;
        // cout << happy << " " << unhappy << endl;
    }
}