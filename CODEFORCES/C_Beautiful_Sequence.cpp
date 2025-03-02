#include <iostream>
#include <vector>
using namespace std;
 
const int MOD = 998244353;
 
// A simple modular integer class for modulo MOD
struct ModInt {
    int value;
    // Constructor: reduces x modulo MOD
    ModInt(long long x = 0) {
        value = int(x % MOD);
        if (value < 0) value += MOD;
    }
    
    // In-place addition
    ModInt& operator+=(const ModInt &other) {
        value += other.value;
        if (value >= MOD) value -= MOD;
        return *this;
    }
    
    // In-place subtraction
    ModInt& operator-=(const ModInt &other) {
        value -= other.value;
        if (value < 0) value += MOD;
        return *this;
    }
    
    // In-place multiplication
    ModInt& operator*=(const ModInt &other) {
        value = (long long)value * other.value % MOD;
        return *this;
    }
    
    // Fast exponentiation
    ModInt pow(long long exp) const {
        ModInt result(1), base(*this);
        while (exp > 0) {
            if (exp & 1) result *= base;
            base *= base;
            exp /= 2;
        }
        return result;
    }
    
    // Inverse using Fermat's little theorem (MOD is prime)
    ModInt inv() const {
        return pow(MOD - 2);
    }
    
    // In-place division
    ModInt& operator/=(const ModInt &other) {
        return *this *= other.inv();
    }
};
 
// Non-member operator overloads
ModInt operator+(ModInt a, const ModInt &b) { return a += b; }
ModInt operator-(ModInt a, const ModInt &b) { return a -= b; }
ModInt operator*(ModInt a, const ModInt &b) { return a *= b; }
ModInt operator/(ModInt a, const ModInt &b) { return a /= b; }
 
// The solve function remains essentially the same.
void solve() {
    int n;
    cin >> n;
    ModInt ans = 0, p = 0, q = 0;
    vector<ModInt> dp(4, 0);
    dp[0] = 1;
    while(n--) {
        int x; cin >> x;
        if(x == 2) dp[x] += dp[x];
        dp[x] += dp[x - 1];
    }
    cout << dp[3].value << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ModInt a = 123, b = 123;
    // cin >> a.value;
    // cout << a.value; return 0;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
