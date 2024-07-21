#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int capacity, int element, int position) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to create space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Update the size of the array
    (*size)++;

    printf("Element %d inserted at position %d.\n", element, position);
}


void deleteElement(int arr[], int *size, int position) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    // Shift elements to fill the gap left by the deleted element
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    (*size)--;

    printf("Element deleted from position %d.\n", position);
}

int main() {
    int arr[10] = {1, 2, 4, 5, 6};
    int size = 5;
    int capacity = 10;

    displayArray(arr, size);

    // Example of inserting element 3 at position 2
    insertElement(arr, &size, capacity, 3, 2);

    displayArray(arr, size);

    // Example of deleting element at position 2
    deleteElement(arr, &size, 2);

    displayArray(arr, size);
    return 0;
}
