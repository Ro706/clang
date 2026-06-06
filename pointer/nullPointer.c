#include <stdio.h>
int main() {
    int *ptr = NULL;
    printf("%p\n", ptr);  // prints (nil) or 0x0
    // Trying to dereference a null pointer will result in a segmentation fault
    // printf("%d\n", *ptr);  // Uncommenting this line will cause a segmentation fault
    return 0;
}
