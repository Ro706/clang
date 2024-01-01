#include<stdio.h>
int main(){
	int num , temp ;
	printf("Enter a number : ");
	scanf("%d",&num);
	temp = num % 10;
	if(temp%2 == 0)
		printf("Last digit is even");
	else
		printf("Last digit is odd");
	return 0 ;
}

