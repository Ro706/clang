//Rotate Array**: Write a program to rotate an array by a given number of positions.
//      * Input: `arr[] = {1, 2, 3, 4, 5}`, `positions = 2`
//      * Output: `arr[] = {4, 5, 1, 2, 3}`

#include <stdio.h>

void rotateArray(int arr[], int n, int positions) {
    int temp[n];
    positions = positions % n; // Handle positions > n

    // Copy rotated elements into temp
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + positions) % n];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positions = 2;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateArray(arr, n, positions);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

