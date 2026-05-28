////Write a C program to store and display a student's information using a union, where the union contains variables for roll number, name, and marks.


#include <stdio.h>
#include <string.h> // Required for strcpy

int main() {
    union student {
        char name[20];
        int roll;
        float marks;
    };

    union student s1;

    // Use strcpy to assign a string to the char array
    strcpy(s1.name, "Rohit");
    printf("Student name is %s\n", s1.name);

    // Assign roll number
    s1.roll = 21;
    printf("Student roll is %d\n", s1.roll);

    // Assign marks
    s1.marks = 98.90;
    printf("Student marks is %.2f\n", s1.marks);

    return 0;
}
