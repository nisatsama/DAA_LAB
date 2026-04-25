#include <stdio.h>

int queue[100], front = -1, rear = -1;

void enqueue(int x) {
    if(front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    return queue[front++];
}

int main() {
    int n, i, j, start;
    scanf("%d", &n);

    int adj[n][n], visited[n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    for(i = 0; i < n; i++)
        visited[i] = 0;

    scanf("%d", &start);

    enqueue(start);
    visited[start] = 1;

    while(front <= rear) {
        int v = dequeue();
        printf("%d ", v);

        for(i = 0; i < n; i++) {
            if(adj[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }

    return 0;
}