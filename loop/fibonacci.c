//Write a C program to print the first 15 Fibonacci numbers using a while loop.
//
#include<stdio.h>

int main(){
	int range =1,num1=0,num2=1,sum = 0;
	printf("%d\n",num1);
	while(range<=15){
		sum = num1 + num2;
		printf("%d\n",sum);
		num1 = num2;
		num2 = sum;
		range++;
	}
	return 0;
}
