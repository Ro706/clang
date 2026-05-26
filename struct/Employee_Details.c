//Employee Details: Define a struct to store an employee's name, employee ID, department, and salary. Write a program to input and display the employee's details.


#include<stdio.h>

int main(){
	struct EMPLOYEE{
		char name[20];
		int id;
		char department[20];
		float salary;
	} employee;
	
	//Enter details
	printf("Enter details: \n");
	
	//Enter Name: 
	printf("Enter name: ");
	scanf("%[^\n]",employee.name);

	printf("\n");
	//Enter Id: 
	printf("Enter ID: ");
	scanf("%d",&employee.id);
	
	printf("\n");
	//Enter Department:
	printf("Enter Department: ");
	scanf("%[^\n]",employee.department);

	printf("\n");
	//Enter Salary: 
	printf("Enter salary: ");
	scanf("%f",&employee.salary);

	printf("\n");

printf("Employee name : %s\nEmployee id: %d\nEmployee Department: %s\nEmployee salary: %.2f\n",employee.name,employee.id,employee.department,employee.salary);
	return 0;
}
