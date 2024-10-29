#include <stdio.h>
int main() {
    int i, j;
    int ara[3][2];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &ara[i][j]);
        }
    }

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 3; i++) {
            printf("%d\t", ara[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main() {
    int i, j;
    int ara1[3][2], ara2[2][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &ara1[i][j]);
        }
    }

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 3; i++) {
            printf("%d\t", ara1[i][j]);
        }
        printf("\n");
    }

    return 0;
}