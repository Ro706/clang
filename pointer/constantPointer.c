#include <stdio.h>
int main() {
    int x = 10;
    int *const ptr = &x;  // constant pointer
    printf("%d\n", *ptr);  // prints 10
    // Trying to modify a constant pointer will result in a compilation error
    //int y = 11;
    //ptr = &y;  // Uncommenting this line will cause a compilation error
    //printf("%d\n",ptr);
    //
    //constantPointer.c: In function ‘main’:
	//constantPointer.c:8:9: error: assignment of read-only variable ‘ptr’
	//    8 |     ptr = &y;  // Uncommenting this line will cause a compilation error
	//      |         ^
    return 0;
}
