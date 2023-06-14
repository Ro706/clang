#include<stdio.h>
void main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("The number is even.");
    } else {
        printf("The number is odd.");
    }
}
