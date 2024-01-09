#include <stdio.h>

int main() {
    int year, days;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    // Calculating the year based on days (assuming 365 days in a non-leap year)
    year = days / 365;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
