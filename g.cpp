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

int hash1[40], hash2[40];
void hashing(string &s) {
    long long m = s.size();
    // change the value of base1 and base2 depending on the range of character
    long long hp1 = 0, hp2 = 0, pv1 = 1, pv2 = 1, base1 = 61,
              base2 = 71; // hp=hash of pattern and pv=positional value

    // calculating hash
    for (long long i = 0; i < m; i++) {
        // works only for lowercase letter
        hp1 = (hp1 + ((s[i] - 'a' + 1) * pv1) % MOD) % MOD;
        hp2 = (hp2 + ((s[i] - 'a' + 1) * pv2) % MOD) % MOD;
        pv1 = (pv1 * base1) % MOD;
        pv2 = (pv2 * base2) % MOD;
        hash1[i] = hp1;
        hash2[i] = hp2;
    }
}

map<pair<int, int>, orderedSet<int>> mp;

void minInt(string &s, string &tem) {
    orderedSet<int> &os = mp[{hash1[s.size() - 1], hash2[s.size() - 1]}];
    int L = 0, R = os.size(), mid, ans = 0;
    while (L <= R) {
        mid = L + ((R - L) / 2);
        if (mid == os.size()) {
            ans = mid;
            break;
        } else if (*os.find_by_order(mid) > mid) {
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    tem = "";
    while (ans) {
        tem += ((char)('0' + (ans % 10)));
        ans /= 10;
    }
    reverse(all(tem));
}

void solve() {
    int n;
    char op;
    string s;
    cin >> n;
    while (n--) {
        cin >> op >> s;
        if (op == 'a') {
            hashing(s);
            string tem = "";
            minInt(s, tem);
            if (tem == "")
                cout << "OK" << endl;
            else {
                s = s + tem;
                cout << s << endl;
            }

            hashing(s);

            mp[{hash1[s.size() - 1], hash2[s.size() - 1]}].insert(0);

            int num = 0, pv = 1;
            while (s.size() > 1 && pv <= 100000) {
                if (s.back() >= 'a' && s.back() <= 'z')
                    break;
                num = ((s.back() - '0') * pv) + num;
                pv *= 10;
                if (s.back() == '0') {
                    s.ppb();
                } else {
                    s.ppb();
                    mp[{hash1[s.size() - 1], hash2[s.size() - 1]}].insert(num);
                }
            }
        } else {
            hashing(s);
            if (mp[{hash1[s.size() - 1], hash2[s.size() - 1]}].size() > 0 &&
                *mp[{hash1[s.size() - 1], hash2[s.size() - 1]}].find_by_order(
                    0) == 0) {
                cout << "DELETED" << endl;
                mp[{hash1[s.size() - 1], hash2[s.size() - 1]}].erase(0);

                int num = 0, pv = 1;
                while (s.size() > 1 && pv <= 100000) {
                    if (s.back() >= 'a' && s.back() <= 'z')
                        break;
                    num = ((s.back() - '0') * pv) + num;
                    pv *= 10;
                    if (s.back() == '0') {
                        s.ppb();
                    } else {
                        s.ppb();
                        mp[{hash1[s.size() - 1], hash2[s.size() - 1]}].erase(
                            num);
                    }
                }
            } else
                cout << "INVALID" << endl;
        }
    }
    return;
}

int32_t main() {
    fios();

    solve();
    return 0;
}