#include <stdio.h>
#include <math.h>
//function
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum == n;
}

int isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int isArmstrong(int n) {
    int sum = 0, original = n, digits = floor(log10(n)) + 1;
    while (n != 0) {
        sum += pow(n % 10, digits);
        n /= 10;
    }
    return original == sum;
}

int main() {
    int num ;
    printf("enter a number:\n");
    scanf("%d",&num);
    printf("%d is ", num);
    if (!isPrime(num)) 
		printf("not ");
    printf("a prime number.\n");

    printf("%d is ", num);
    if (!isPerfect(num)) 
		printf("not ");
    printf("a perfect number.\n");

    printf("%d is ", num);
    if (!isPalindrome(num))
		 printf("not ");
    printf("a palindrome number.\n");

    printf("%d is ", num);
    if (!isArmstrong(num)) 
		printf("not ");
    printf("an Armstrong number.\n");

    return 0;
}
