/*
12. Write a C program to create a record containing the name of cricketer (char array), his age
(integer), and number of test matches (integer) that he has played and the average runs
(float) that he has scored in each test match. Create an array of structures to hold records
of 20 such cricketers and then write a program to read these records and print it, also find
the cricketer which has the highest average. */
#include<stdio.h>
struct cricketer{
	char name[20];
	int age;
	int test_match;
	
};
int main(){
	struct cricketer cricketer[20];
	for (int i=0;i<2;i++){
		printf("Enter a Name:");
		scanf("%s",&cricketer[i].name);
		printf("Enter a AGE:");
		scanf("%d",&cricketer[i].age);
		printf("Enter a number of test match:");
		scanf("%d",&cricketer[i].test_match);
	}
	for (int i=0;i<2;i++){
		printf("Name:%s Age:%d Test match:%d\n",cricketer[i].name,cricketer[i].age,cricketer[i].test_match);
	}
}
