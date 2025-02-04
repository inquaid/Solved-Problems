#include <iostream>
#include <vector>


// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

// template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

/**
 *  less_equal, greater, greater_equal
 *  order_of_key(k) : no. of elements < k
 *  find_by_order(i) : value at index i (0-based)
**/

#define sp " "
#define newline cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
// #define int long long

const int N = 1e7 + 5;
vector<int> lp(N + 1);
vector<int> pr;

void Sieve(){
    for (int i = 2; i <= N; ++i){
        if (lp[i] == 0){
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j){
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]){
                break;
            }
        }
    }
}

void tTestCase(int t) {
    int n; cin >> n;
    // scan(n);
    int cnt = 0;
    for (int a = 0; pr[a] <= n / 2 ; ++a) {
        int b = n - pr[a]; 
        if(lp[b] == b and a <= b) cnt++;
        // if(a > b ) break;

    }

    printf("Case %d: %d\n",t, cnt);
}

void solve() {
    int t; cin >> t;
    Sieve();
    // scan(t);
   for (int i = 0; i < t; ++i) {
       tTestCase(i + 1);
   }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();

    return 0;
}