#include<bits/stdc++.h>
using namespace std;

int f(int n) {
    // return floor(log10(n)) + 1;
    int s = 1;
    while(n) {
        s += (n%10);
        n /= 10;
    } return s;
}

int main() {
    // cout << f(51234);
    // printf("%05d", 12);
    // return 0;
    int n; cin >> n;
    if(n < 3) {
        cout << -1 << endl; 
    } else if(n == 3) {
        cout << 210 << endl;
    } else {
        int flag = n%3; if(!flag) flag= 3;
        int mn = pow(10, flag - 1);
        cout << mn;
        for (int i = floor(log10(mn)) + 1 ; i < n-3; i++) {
            cout << 0;
        }
        int times = ceil(n/3.0);
        if(times%2 != 0) flag = 1;
        else flag = -1;
        for (int i = mn; i < 1000; i++) {
            if((i + (flag * mn)) % 7 == 0 and f(i) % 3 == 0 and i%10 == 0) {
                printf("%03d\n", i); break;
            }
        }
        
    }
    /**
     * 2 3 5 7
     * 2, 5 --> 0
     * 10000000000
     */
}