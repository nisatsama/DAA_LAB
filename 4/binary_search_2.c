#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if(arr[mid] == key)
        return mid;
    else if(arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int n, i, key;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    printf("%d", result);

    return 0;
}