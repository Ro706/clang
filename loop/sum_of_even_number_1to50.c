// Write a C program to calculate the sum of all even numbers from 1 to 50 using a do-while loop.
//
#include<stdio.h>

int main(){
	int range=1,sum = 0 ;
	do{
	   if( range % 2 == 0){
		sum += range;
	   }
	   range++;
	}while(range<=50);
	printf("%d\n",sum);
	return 0;
}
