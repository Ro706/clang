//Delete Element from Array**: Write a program to delete an element from an array.
//      * Input: `arr[] = {10, 20, 30, 40, 50}`, `element = 30`
//      * Output: `arr[] = {10, 20, 40, 50}`


#include <stdio.h>

void deleteElement(int arr[], int *n, int element) {
    int i, pos = -1;
    // Find position of element
    for (i = 0; i < *n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Element not found!\n");
        return;
    }
    // Shift elements left
    for (i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; // Reduce size
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 30;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &n, element);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

