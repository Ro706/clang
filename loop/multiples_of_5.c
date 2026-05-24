// Write a C program to print the first 10 multiples of 5 using a for loop.

#include<stdio.h>

int main(){
	for (int i=1 ;i<=10;i++){
		printf("5 * %d = %d\n",i,i*5);
	}
	return 0;
}
