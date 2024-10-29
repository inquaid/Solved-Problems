#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int mid = floor(n / 2.0), res = 0;

        for (int i = 1; i < mid; i++) {
            // cout << a[i] << " " << a[n - i - 1] << endl;
            int a1 = a[i - 1], a2 = a[i], a3 = a[n - i - 1], a4 = a[n - i];
            if ((a1 & a2 & (~a3) & (~a4)) | ((~a1) & (~a2) & a3 & a4)) {
                swap(a[i], a[n - i - 1]);
                cout << " as";
            }
            if (a[i] == a[i - 1])
                res++;
            if (a[n - i - 1] == a[n - i])
                res++;
        }
        if (n & 1) {
            if (a[mid] == a[mid - 1])
                res++;
            if (a[mid] == a[mid + 1])
                res++;
            // cout << a[mid] << endl;
        }
        // cout << res << endl;
        for(auto i : a)
            cout << i << " ";
    }
}