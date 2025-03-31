#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_N 10000000

void sieve(bool *is_prime, long long n) {
    for (long long i = 0; i <= n; i++)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

long long countPairs(long long n) {
    bool *is_prime = malloc((MAX_N + 1) * sizeof(bool));
    if (!is_prime) return -1;
    sieve(is_prime, n);
    long long count = 0;
    for (long long a = 1; a <= n; a++) {
        for (long long p = 2; p * a <= n; p++) {
            if (is_prime[p])
                count++;
        }
    }
    free(is_prime);
    return count;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", countPairs(n));
    }
    return 0; 
}
