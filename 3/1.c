#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < 3; k++) {
                printf("");
            }
        }
    }

    for(i = 0; i < 2*n; i++) {
        printf("");
    }

    printf("");
    printf("");
    printf("");
    printf("");

    return 0;
}