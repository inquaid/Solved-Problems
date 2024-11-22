#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T>
using orderedSet =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
typedef double dl;
typedef long double ldl;
// #define int ll

#define endl '\n'
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

const double PI = acos(-1);
const int MOD = 1000000007;

#define mem(a, n, b)                                                           \
    for (int i = 0; i < n; i++) {                                              \
        a[i] = b;                                                              \
    }
#define mem2d(a, n, m, b)                                                      \
    for (int i = 0; i < n; i++) {                                              \
        for (int j = 0; j < m; j++) {                                          \
            a[i][j] = b;                                                       \
        }                                                                      \
    }
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

#define fios()                                                                 \
    ;                                                                          \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);
#define fraction(x)                                                            \
    ;                                                                          \
    cout.unsetf(ios::floatfield);                                              \
    cout.precision(x);                                                         \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                                                                 \
    ;                                                                          \
    freopen("input.txt", "r", stdin);                                          \
    freopen("output.txt", "w", stdout);