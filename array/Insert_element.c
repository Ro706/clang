// Insert Element in Array
// Input: arr[] = {10, 20, 30, 40, 50}, element = 25, index = 2
// Output: arr[] = {10, 20, 25, 30, 40, 50}

#include <stdio.h>
#include <stdlib.h>  // ✅ Needed for malloc and free

void insertElement(int arr[], int n, int element, int index) {
    // Shift elements to the right
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element
    arr[index] = element;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 25;
    int index = 2;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Allocate new array with size n+1
    int* newArr = (int*) malloc((n + 1) * sizeof(int));
    if (newArr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Copy old elements
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    // Insert new element
    insertElement(newArr, n, element, index);

    printf("Array after insertion: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    free(newArr);  // ✅ Properly free allocated memory
    return 0;
}

