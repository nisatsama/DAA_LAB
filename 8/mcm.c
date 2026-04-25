#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, i, j, k, L;
    scanf("%d", &n);

    int p[n];
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);

    int m[n][n];

    for(i = 1; i < n; i++)
        m[i][i] = 0;

    for(L = 2; L < n; L++) {
        for(i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = 1000000;
            for(k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1]*p[k]*p[j];
                if(q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    printf("%d", m[1][n - 1]);

    return 0;
}