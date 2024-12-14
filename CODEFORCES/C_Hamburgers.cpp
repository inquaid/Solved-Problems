#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

string s;
int nb, ns, nc;
int pb, ps, pc;
int bread, sausage, cheese;
int r;

bool isPossible(int mid) {
    // Conditions
    int costTotalB = max(0LL, ((mid * bread) - nb)) * pb;
    int costTotalS = max(0LL, ((mid * sausage) - ns )) * ps;
    int costTotalC = max(0LL, ((mid * cheese) - nc)) * pc;


    return (costTotalB+costTotalS+costTotalC ) <= r;
}

void binarySearchOnAnswers() {
    int l = 0, r = 1;
    while (isPossible(r) == true) {
        r *= 2;
    }
    // cout << r<<endl;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(mid)) { // lower bound
            l = mid + 1; // swap r, l for upper bound
        } else
            r = mid - 1;
    }
    cout << l - 1;
}

void solve() { 
    // tTestCase();
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r; 

    bread = count(s.begin(), s.end(), 'B');
    sausage = count(s.begin(), s.end(), 'S');
    cheese = count(s.begin(), s.end(), 'C');
    // cout << bread << " " << sausage <<" " << cheese;
    // return ;

    binarySearchOnAnswers();

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}