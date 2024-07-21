#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if the key is found
        }
    }
    return -1;  // Return -1 if the key is not found
}

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;  // Return the index if the key is found
        }

        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Return -1 if the key is not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result1 = linearSearch(arr, n, key);

    if (result1 != -1) {
        printf("Element %d found at index %d.\n", key, result1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    int result2 = binarySearch(arr, 0, n - 1, key);

    if (result2 != -1) {
        printf("Element %d found at index %d.\n", key, result2);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
