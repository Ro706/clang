//Use a union to store a person's details, including name, age, and contact number. Write a program to display the person's information.

#include <stdio.h>
#include <string.h>

// Define a union to hold person details
union Person {
    char name[50];
    int age;
    long contact_number;
};

int main() {
    union Person person;

    // Store and display name
    strcpy(person.name, "Rohit Mandal");
    printf("Name: %s\n", person.name);

    // Store and display age (overwrites name)
    person.age = 30;
    printf("Age: %d\n", person.age);

    // Store and display contact number (overwrites age)
    person.contact_number = 9876543210L;
    printf("Contact Number: %ld\n", person.contact_number);

    return 0;
}
