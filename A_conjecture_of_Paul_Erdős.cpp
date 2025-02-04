#include <iostream>
#include <vector>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;

template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

/**
 *  less_equal, greater, greater_equal
 *  order_of_key(k) : no. of elements < k
 *  find_by_order(i) : value at index i (0-based)
**/

#define sp " "
#define newline cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long

const int N = 10000000;
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

ordered_set<int> ost;

void tTestCase(int t) {
    int n; cin >> n;
    // scan(n); 
    int cnt = ost.order_of_key(n + 1);
    // print(cnt - 1);
    cout << cnt - 1 << "\n";
}

void solve() {
    Sieve();
    int t; cin >> t;
    // scan(t);
    int cnt = 0;
    for (int x = 0; x < 3163; ++x) {
        for (int y = 0; y < 57; ++y) {
            int num = (x * x) + (y * y * y * y);
            if(num > N) continue;
            if(lp[num] == num){
                ost.insert(num);
                // cnt++;
            }
        }
    }
    // cout << cnt;

    while (t--) {
        tTestCase(t);
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