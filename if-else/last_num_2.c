#include<stdio.h>
int main(){
	int num ,temp;
	printf("Enter a number :");
	scanf("%d",&num);
	temp = num % 10;
	if(temp ==2)
		printf("Last number is 2");
	else
		printf("Last number is not 2");
	return 0;
}
