//Student Record: Create a struct to store a student's name, roll number, and grades in three subjects. Write a program to input and display the student's record.


#include <stdio.h>

int main() {

    struct GRADE {
        char subject1;
        char subject2;
        char subject3;
    };

    struct STUDENT {
        char name[20];
        int roll;
        struct GRADE grade;
    };

    struct STUDENT student;

    // Enter name
    printf("Enter your name: ");
    scanf("%s", student.name);

    // Enter roll number
    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    // Enter grades
    printf("Enter your three subject grades (A/B/C)\n");

    printf("Enter Grade subject 1: ");
    scanf(" %c", &student.grade.subject1);

    
    printf("Enter Grade subject 2: ");
    scanf(" %c", &student.grade.subject2);

    printf("Enter Grade subject 3: ");
    scanf(" %c", &student.grade.subject3);

    // Output
    printf("\nHello %s\n", student.name);
    printf("Your roll no is %d\n", student.roll);

    printf("Your grades are: %c %c %c\n",
           student.grade.subject1,
           student.grade.subject2,
           student.grade.subject3);

    return 0;
}
