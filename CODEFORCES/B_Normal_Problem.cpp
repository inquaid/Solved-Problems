#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for(auto &ch : s){
            if(ch == 'p')   
                ch = 'q';
            else if(ch == 'q')
                ch = 'p';
        }
        reverse(s.begin(), s.end());
        cout << s; 
        newline;
    }
}

void solve() { 
    tTestCase(); 

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}