#include <stdio.h>

struct Activity {
    int start, finish;
};

void sort(struct Activity arr[], int n) {
    int i, j;
    struct Activity temp;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
            if(arr[j].finish > arr[j + 1].finish) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int n, i, count = 1, last;
    scanf("%d", &n);

    struct Activity arr[n];

    for(i = 0; i < n; i++)
        scanf("%d %d", &arr[i].start, &arr[i].finish);

    sort(arr, n);

    last = arr[0].finish;

    for(i = 1; i < n; i++) {
        if(arr[i].start >= last) {
            count++;
            last = arr[i].finish;
        }
    }

    printf("%d", count);

    return 0;
}