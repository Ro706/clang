#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}

