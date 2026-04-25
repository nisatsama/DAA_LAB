#include <stdio.h>

int visited[100], adj[100][100], n;

void dfs(int v) {
    int i;
    visited[v] = 1;
    printf("%d ", v);

    for(i = 0; i < n; i++) {
        if(adj[v][i] && !visited[i])
            dfs(i);
    }
}

int main() {
    int i, j, start;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    for(i = 0; i < n; i++)
        visited[i] = 0;

    scanf("%d", &start);

    dfs(start);

    return 0;
}