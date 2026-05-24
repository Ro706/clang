//Write a C program to print the numbers from 1 to 25, but print "Hello" instead of the multiples of 5, using a do-while loop.
//
//
#include<stdio.h>

int main(){
	int range=1;
	do{
		if(range % 5 == 0){
			printf("Hello\n");
		}else{
			printf("%d\n",range);
		}
		range++;
	}while(range<=25);
	return 0;
}	
