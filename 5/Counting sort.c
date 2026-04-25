#include <stdio.h>

int main() {
    int n, i, max = 0;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];

    for(i = 0; i <= max; i++)
        count[i] = 0;

    for(i = 0; i < n; i++)
        count[arr[i]]++;

    for(i = 0; i <= max; i++) {
        while(count[i]--) {
            printf("%d ", i);
        }
    }

    return 0;
}