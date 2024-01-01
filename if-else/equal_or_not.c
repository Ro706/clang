#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter a 1st number:");
	scanf("%d",&num1);
	printf("Enter a 2nd number:");
	scanf("%d",&num2);
	if (num1==num2)
		printf("Equal");
	else 
		printf("Not-Equal");
	return 0;
}
