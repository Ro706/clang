#include <stdio.h>
int main() {
    const int x = 10;
    const int *ptr = &x;  // pointer to constant
    printf("%d\n", *ptr);  // prints 10
    // Trying to modify the data pointed to by a pointer to constant will result in a compilation error
    //*ptr = 20;  // Uncommenting this line will cause a compilation error
    //printf("%d\n",*ptr);
    //pointerToConstant.c: In function ‘main’:
	//pointerToConstant.c:7:10: error: assignment of read-only location ‘*ptr’
	//    7 |     *ptr = 20;  // Uncommenting this line will cause a compilation error
	//      |          ^
	      
    return 0;
}
