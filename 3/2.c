#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j = j * 2) {
            printf("");
        }
    }

    for(i = 0; i < 5*n; i++) {
        printf("");
    }

   for(int i=0;i<10;i++){
    printf(" ");
   }

    return 0;
}