#include <stdio.h>

int main() {
    int num_employees;
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    float salaries[num_employees];
    float total_salary = 0;
    float highest_salary = 0;

    for (int i = 0; i < num_employees; i++) {
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        total_salary += salaries[i];
        if (salaries[i] > highest_salary) {
            highest_salary = salaries[i];
        }
    }

    float average_salary = total_salary / num_employees;
    printf("The average salary is: %.2f\n", average_salary);
    printf("The highest salary is: %.2f\n", highest_salary);

    return 0;
}
