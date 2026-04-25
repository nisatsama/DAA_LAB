#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, i;
    scanf("%d", &n);

    int a[2][n], t[2][n], e[2], x[2];

    for(i = 0; i < n; i++)
        scanf("%d %d", &a[0][i], &a[1][i]);

    for(i = 1; i < n; i++)
        scanf("%d %d", &t[0][i], &t[1][i]);

    scanf("%d %d", &e[0], &e[1]);
    scanf("%d %d", &x[0], &x[1]);

    int T1[n], T2[n];

    T1[0] = e[0] + a[0][0];
    T2[0] = e[1] + a[1][0];

    for(i = 1; i < n; i++) {
        T1[i] = min(T1[i - 1] + a[0][i], T2[i - 1] + t[1][i] + a[0][i]);
        T2[i] = min(T2[i - 1] + a[1][i], T1[i - 1] + t[0][i] + a[1][i]);
    }

    int result = min(T1[n - 1] + x[0], T2[n - 1] + x[1]);

    printf("%d", result);

    return 0;
}