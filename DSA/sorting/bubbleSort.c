#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void arrprint(int arr[], int n){
	printf("[ ");
	for(int i = 0 ;i < n - 1; i++){
		printf(" %d ",arr[i]);
	}
	printf(" ]\n");
}

int main() {
    int arr[] = {5, 2, 8, 3, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array: \n");
    arrprint(arr,n);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    arrprint(arr,n);
    return 0;
}
