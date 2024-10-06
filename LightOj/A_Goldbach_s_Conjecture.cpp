// the below bitwise is from safayet bhai blog
// i modified it a little
// assume it will be in my cheat sheet
// mainly i want to check if bitwise worth it or not
// also bitwise is fun :)

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e7 + 7;
int prime[N / 10]; 
int status[N / 32]; 
int primeCount = 0; 
bool check(int N, int pos) {
    return (bool)(N & (1 << pos));
}

int Set(int N, int pos) {
    return N = N | (1 << pos);
}

void sieve() {
    int sqrtN = sqrt(N);
    for (int i = 3; i <= sqrtN; i += 2) {
        if (!check(status[i / 32], i % 32)) {
            for (int j = i * i; j <= N; j += 2 * i) {
                status[j / 32] = Set(status[j / 32], j % 32);
            }
        }
    }

    prime[primeCount++] = 2;
    for (int i = 3; i <= N; i += 2) {
        if (!check(status[i / 32], i % 32)) {
            prime[primeCount++] = i;
        }
    }
}

bool isPrime(int num) {
    if (num == 2) return true; 
    if (num < 2 || num % 2 == 0) return false; 
    return !check(status[num / 32], num % 32);
}
int main()
{
    sieve();
    int n;
    cin >> n;
    // int sz = primes.size();
    for (int i = 1; i <= n; i++)
    {
        int temp, cnt = 0;
        cin >> temp;
        for (int j = 0; prime[j] <= (temp/2); j++)
        {
            int b = temp - prime[j];
            if (isPrime(b))
            {
                cnt++;
            }
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
}