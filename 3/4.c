#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++) {
                printf("");
            }
        }
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j = j * 2) {
            printf("");
        }
    }

    for(int i=0;i<20;i++){
      printf("");
    }

    return 0;
}