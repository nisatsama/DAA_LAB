#include <stdio.h>

struct Item {
    int weight, value;
    float ratio;
};

void sort(struct Item arr[], int n) {
    int i, j;
    struct Item temp;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
            if(arr[j].ratio < arr[j + 1].ratio) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int n, i, W;
    scanf("%d", &n);

    struct Item arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].value, &arr[i].weight);
        arr[i].ratio = (float)arr[i].value / arr[i].weight;
    }

    scanf("%d", &W);

    sort(arr, n);

    float total = 0.0;

    for(i = 0; i < n; i++) {
        if(W >= arr[i].weight) {
            W -= arr[i].weight;
            total += arr[i].value;
        } else {
            total += arr[i].ratio * W;
            break;
        }
    }

    printf("%.2f", total);

    return 0;
}