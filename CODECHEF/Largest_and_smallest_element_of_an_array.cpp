#include <stdio.h>

typedef struct pair {
    int a, b;
} pair;

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a > b ? b : a; }

pair f(int ary[], int l, int r) {
    if (l == r) {
        pair pr;
        pr.a = ary[l];
        pr.b = ary[l];
        return pr;
    } else if (l == (r - 1)) {
        pair pr;
        pr.a = min(ary[l], ary[r]);
        pr.b = max(ary[l], ary[r]);
        return pr;
    } else {
        int mid = (r + l) / 2;
        pair left = f(ary, l, mid);
        pair right = f(ary, mid + 1, r);

        pair res;
        res.a = min(left.a, right.a);
        res.b = max(left.b, right.b);
        return res;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int ary[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &ary[i]);
        }

        pair res = f(ary, 0, n - 1);
        printf("%d %d\n", res.a, res.b);
    }
}