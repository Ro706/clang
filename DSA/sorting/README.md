# Introduction to Sorting

Sorting is a fundamental concept in computer science, and it refers to the process of arranging a collection of elements in a specific order, either in ascending or descending order. In C programming, sorting is a crucial aspect of data structures and algorithms, as it is used to organize and manage large datasets.

### Why Sorting is Important

Sorting is essential in many applications, including:
1. **Data analysis**: Sorting helps to identify patterns and trends in data.
2. **Database management**: Sorting is used to index and retrieve data efficiently.
3. **File systems**: Sorting is used to manage files and directories.
4. **Web search engines**: Sorting is used to rank search results.

### Types of Sorting

There are several types of sorting algorithms, each with its own strengths and weaknesses. Here are some of the most common types of sorting:
1. **Bubble Sort**: Bubble sort is a simple sorting algorithm that works by repeatedly iterating through the data and swapping adjacent elements if they are in the wrong order.
2. **Selection Sort**: Selection sort is a sorting algorithm that works by selecting the smallest (or largest) element from the unsorted portion of the data and moving it to the beginning (or end) of the sorted portion.
3. **Insertion Sort**: Insertion sort is a sorting algorithm that works by iterating through the data one element at a time and inserting each element into its proper position in the sorted portion of the data.
4. **Merge Sort**: Merge sort is a sorting algorithm that works by dividing the data into smaller chunks, sorting each chunk, and then merging the sorted chunks back together.
5. **Quick Sort**: Quick sort is a sorting algorithm that works by selecting a pivot element, partitioning the data around the pivot, and recursively sorting the subarrays.
6. **Heap Sort**: Heap sort is a sorting algorithm that works by building a heap from the data and then removing the largest (or smallest) element from the heap and placing it at the end (or beginning) of the sorted data.
7. **Radix Sort**: Radix sort is a sorting algorithm that works by sorting the data based on the digits of the elements.
8. **Counting Sort**: Counting sort is a sorting algorithm that works by counting the number of occurrences of each element in the data and then constructing the sorted data from the counts.

### Example: Bubble Sort 

```c
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
int main() {
    int arr[] = {5, 2, 8, 3, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

### What is Time Complexity?

The time complexity of a sorting algorithm refers to the amount of time it takes to sort the data.

- **Time Complexity** :  O(n^2)

### What is Space Complexity?

The space complexity of a sorting algorithm refers to the amount of memory it uses to sort the data.

- **Space Complexity** : O(1)

---

 
