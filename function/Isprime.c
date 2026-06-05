#include <stdio.h>
int is_prime(int num) {
   if (num <= 1) {
      return 0;  // 0 and 1 are not prime numbers
   }
   for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
         return 0;  // num is divisible by i, so it's not prime
      }
   }
   return 1;  // num is prime
}
int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   if (is_prime(num)) {
      printf("%d is a prime number\n", num);
   } else {
      printf("%d is not a prime number\n", num);
   }
   return 0;
}
