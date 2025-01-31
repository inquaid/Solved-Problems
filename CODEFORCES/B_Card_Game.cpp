#include<bits/stdc++.h>
using namespace std;

int f(int a1, int a2, int b1, int b2) {
    if (a1 > b1 and a2 > b2) return 1;
    if (a1 > b1 and a2 >= b2) return 1;
    if (a1 >= b1 and a2 > b2) return 1;

    return 0;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int cnt = 0;
        if(f(a1, a2, b1, b2)) cnt++;
        if(f(a1, a2, b2, b1)) cnt++;
        if(f(a2, a1, b1, b2)) cnt++;
        if(f(a2, a1, b2, b1)) cnt++;
        cout << cnt << endl;
    }
    
}