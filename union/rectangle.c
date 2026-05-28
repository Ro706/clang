// Create a union to represent a rectangle, with variables for length, width, and area. Write a program to calculate and display the area of the rectangle.

#include <stdio.h>

// Define a struct to hold rectangle properties
struct Rectangle {
    float length;
    float width;
    float area;
};

int main() {
    struct Rectangle rect;

    // Input length and width
    printf("Enter length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &rect.width);

    // Calculate area
    rect.area = rect.length * rect.width;

    // Display the area
    printf("Area of the rectangle: %.2f\n", rect.area);

    return 0;
}
