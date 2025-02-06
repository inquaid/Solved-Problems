#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<limits.h>>

#define endl "\n";
using namespace std;
// #define int long long
bool pos(vector<int> &x, vector<int> &t, double time) {
    double L = 0, R = INT_MAX;
    for (int i = 0; i < x.size(); i++) {
        if(t[i] > time) return 0;
        double l = x[i] - (time - t[i]);
        double r = x[i] + (time - t[i]);
        L = max(L, l);
        R = min(R, r);
    }
    // cout << L << " " << R << endl;
    return L <= R;
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout << setprecision(15) ;
        int t;
        cin >> t;
        while (t--) {
        int n; cin >> n;
        vector<int> x(n), t(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> t[i];
        }

        double l = 0, r = 1;
        while (!pos(x, t, r)) {
            r *= 2;
        }

        while ((r - l) >= 1e-7) {
            double mid = (r + l) / 2.0;
            if(pos(x, t, mid)) {
                r = mid;
            } else {
                l = mid;
            }
        }
        // cout << l << " " << r << endl;
        double time = r;
        double L = 0, R = INT_MAX;
        for (int i = 0; i < x.size(); i++) {
        // if(t[i] > time) return 0;
            double l = x[i] - (time - t[i]);
            double r = x[i] + (time - t[i]);
            L = max(L, l);
            R = min(R, r);
        }
        // return L <= R;
        // cout << abs(R) << endl;
        cout << (R + L) / 2.0  << endl;        
    }
    
}