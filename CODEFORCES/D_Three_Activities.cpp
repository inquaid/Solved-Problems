#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using multi_ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag,
                               tree_order_statistics_node_update>;
void solve();
int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
void solve() {
    int n;
    cin >> n;
    multi_ordered_set<pair<int, int>> a, b, c;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.insert({temp, i});
    }
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        b.insert({temp, i});
    }
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        c.insert({temp, i});
    }

    int res = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if ((*a.find_by_order(i)).second !=
                        (*b.find_by_order(j)).second and
                    (*b.find_by_order(j)).second !=
                        (*c.find_by_order(k)).second and
                    (*a.find_by_order(i)).second != (*c.find_by_order(k)).second

                ) {
                    res = max(res, (*a.find_by_order(i)).first +
                                       (*b.find_by_order(j)).first +
                                       (*c.find_by_order(k)).first);
                }
            }
        }
    }
    cout << res << endl;
}