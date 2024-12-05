// Include the following header files in your code to use PBDS:
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// Namespace
using namespace std;
using namespace __gnu_pbds;
// Templates
template <class T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class T>
using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,
                               tree_order_statistics_node_update>;

int main() {
    multi_ordered_set<int> a;
    a.insert(2);
    a.insert(2);
    a.insert(4);
    a.insert(3);
    a.insert(7);
    a.insert(5);

    //  2   3   4   5   7

    cout << *a.find_by_order(0) << endl;
    cout << *a.find_by_order(1) << endl;
    cout << *a.find_by_order(2) << endl;
    cout << *a.find_by_order(3) << endl;
    cout << *a.find_by_order(4) << endl;
    cout << *a.find_by_order(5) << endl;

    // cout << (a.order_of_key(0)) << endl;
    // cout << (a.order_of_key(1)) << endl;
    // cout << (a.order_of_key(5)) << endl;
    cout << (a.order_of_key(1000)) << endl;
}