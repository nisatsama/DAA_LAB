#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int dp[n + 1];
    dp[0] = 1;

    for(i = 1; i <= n; i++)
        dp[i] = dp[i - 1] * i;

    printf("%d", dp[n]);

    return 0;
}