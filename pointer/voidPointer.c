#include <stdio.h>
int main() {
    int x = 10;
    void *ptr = &x;  // void pointer
    printf("%p\n", ptr);  // prints the memory address of x
    // To access the data pointed to by a void pointer, you need to cast it to the correct type
    printf("%d\n", *(int *)ptr);  // prints 10
    return 0;
}
