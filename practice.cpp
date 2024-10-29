#include <stdio.h>
void printspace(int n) {
    if (n == 0) {
        return;
    }
    printf(" ");
    printspace(n - 1);
}
void printstar(int n) {
    if (n == 0) {
        return;
    }
    printf("*");
    printstar(n - 1);
}
void printrow(int i, int n) {
    if (i > n) {
        return;
    }
    printspace(n - i);
    printstar(2 * i - 1);
    printf("\n");
    printrow(i + 1, n);
}
int main() {
    long long n;
    scanf("%lld", &n);
    printrow(1, n);
    return 0;
}